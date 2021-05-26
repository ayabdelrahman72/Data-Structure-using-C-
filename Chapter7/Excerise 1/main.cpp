#include <iostream>
#include "stackLinkedList.h"
#include "stackType.h"
using namespace std;

int main()
{
    //Testing stack using Lists
     stackLinkedList stack1;
     stackLinkedList stack2;
     int x;

     stack1.push(3);
     stack1.push(5);
     stack1.push(6);
      stack2.push(3);
     stack2.push(9);
     stack2.push(6);

     x=(stack1==stack2);
    cout<<"Does stack1 equal stack2 ?"<<endl;
    if(x)
     cout<<"YES.."<<endl;
     else
      cout<<"NO !!"<<endl;

                                                    /////////////////////////////////////////////////////////////////////////////////////////////////////////////

     //Testing stack using Arrays
     stackType stackArray1(3);
     stackType stackArray2(3);

     stackArray1.push(3);
     stackArray1.push(5);
     stackArray1.push(6);
     stackArray2.push(3);
     stackArray2.push(5);
     stackArray2.push(6);

     x=(stackArray1==stackArray2);
    cout<<"Does stackArray1 equal stackArray2 ?"<<endl;
    if(x)
     cout<<"YES.."<<endl;
     else
      cout<<"NO !!"<<endl;

    return 0;
}
