#include <iostream>
#include "stackLinkedList.h"
#include "polishNotation.h"
using namespace std;


int main()
{
    polishNotation notation;
    int result,num1,num2;
    string expression="32+5*";
    //string postFix=

  // result=notation.EvaluateExpression(expression);
    cout<<notation.InfixToPostfix("1+2*3^4")<<endl;

   /* num1=((int)expression[2] );
    num2=((int)expression[4]);
    result=(num1+num2)-48;
    cout<<result-48<<endl;
    */


}
