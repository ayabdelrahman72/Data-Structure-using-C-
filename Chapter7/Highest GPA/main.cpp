#include <iostream>
#include "stackType.h"
#include "stackADT.h"
#include "stackLinkedList.h"
using namespace std;

int main()
{
  //  stackType  stack1(10);
    stackLinkedList stack1;
    stack1.initializeStack();
    stack1.push(32);
    stack1.push(29);
    stack1.push(20);
   //stack1.RemoveFromTop();

    cout<<stack1.pop()<<endl;
    /*stack1.initializeStack();
    stack1.push(5);
    stack1.push(3);
    stack1.push(2);
    stack1.pop();
    cout<<stack1.top()<<endl;
    */

    return 0;
}
