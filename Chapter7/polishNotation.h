#ifndef POLISHNOTATION_H
#define POLISHNOTATION_H
#include "stackLinkedList.h"
using namespace std;
#include <iostream>
class polishNotation
{
    public:
        polishNotation();
        int EvaluateExpression(string);
        string InfixToPostfix(string);


    protected:

    private:
        bool isDigit(char);
        stackLinkedList stackOperands;
         bool isFirstHighestPrecedence(char,char);

};

#endif // POLISHNOTATION_H
