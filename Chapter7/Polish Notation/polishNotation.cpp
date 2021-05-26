#include "polishNotation.h"
using namespace std;
#include <iostream>
polishNotation::polishNotation()
{
    //ctor
}
string polishNotation::InfixToPostfix(string infix){
         string postfix;
         char c;
         int i=0,j=0;
         for(i=0,j=0;(c=infix[i])!='\0';i++){
            if(isDigit(c)){
                postfix[j]=c;
          //   cout<<postfix[j]<<endl;


            }else{
                if(!stackOperands.isEmptyStack()){
                while(!stackOperands.isEmptyStack() && !isFirstHighestPrecedence(c,stackOperands.returnTop())){

                           postfix[++j]=stackOperands.pop();
                          // cout<<postfix[j]<<endl;



                }


            }
            stackOperands.push(c);

         }


}
  while(!stackOperands.isEmptyStack()){
            postfix[j]=stackOperands.pop();
         //   cout<<postfix[j]<<endl;
            j++;
         }
postfix[j]='\0';
stackOperands.clearStack();
return postfix;

}
   bool polishNotation::isFirstHighestPrecedence(char infix,char stackTop){
          if(infix=='+' || infix=='-')
                return 0;
          else{
               if(stackTop=='^')
                return 0;
               else{
                if((stackTop=='*'|| stackTop=='/' ) &&(infix=='*' || infix=='/'))
                    return 0;
                    else
                 return 1;
               }

          }


   }





 int polishNotation::EvaluateExpression(string expression){
     int operand1,operand2;
     short i=0;
      while(expression[i]!='\0'){
        if(isDigit(expression[i])){
            stackOperands.push((int)expression[i]-48);
       }else
         switch(expression[i]){
        case '+':
       operand1=stackOperands.pop();
       operand2=stackOperands.pop();
       stackOperands.push(operand1+operand2);
       break;
        case '-':
       operand1=stackOperands.pop();
       operand2=stackOperands.pop();
       stackOperands.push(operand1-operand2);
       break;
        case '*':
       operand1=stackOperands.pop();
       operand2=stackOperands.pop();
       stackOperands.push(operand1*operand2);
       break;
        case '/':
       operand1=stackOperands.pop();
       operand2=stackOperands.pop();
       stackOperands.push(operand1/operand2);
       break;
      default:
        cout<<"illegal Expression"<<endl;
        break;
         }


     i++;
         }
         return stackOperands.pop();


 }
 bool polishNotation::isDigit(char x){
     if((int)x>=48 && (int)x<57)
        return 1;
     else
        return 0;

 }
