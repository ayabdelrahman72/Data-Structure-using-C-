#include "polishNotation.h"
using namespace std;
#include <iostream>
polishNotation::polishNotation()
{
    //ctor
}
string polishNotation::InfixToPostfix(string infix){
         string postfix;
         int i=0;
         while(infix[i]!='\0'){
            if(isDigit(infix[i])){
                postfix[i]=infix[i];
            }else{
                while(!stackOperands.isEmptyStack() || !isFirstHighestPrecedence(infix[i],stackOperands.stackTop())){

                           postfix[++i]=stackOperands.pop();
                }
                stackOperands.push(infix[i]);
            }
         }
   bool polishNotation::isFirstHighestPrecedence(char infix,char stackTop){
          if(infix=='+' || infix=='-')
                return 0;
          else{
               if(stackTop=='^')
                return 0;
               else{
                if((stacTop=='*'|| stackTop=='/' ) &&(!infix=='^'))
                    return 0;
               }else
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
