#include <iostream>
#include "queueArrayBased.h"
using namespace std;

int main()
{
    queueArrayBased qu(4);
    qu.addQueue(10);
    qu.addQueue(20);
    qu.addQueue(30);
    qu.addQueue(40);
    cout<<"The queue before editing : ";
    qu.printQueue();
    qu.moveNthFront(2);//element number 2 is 20 from the user point of view
    //but from implementer point of you the function will move element with index no 1 to the front
    cout<<"The queue After editing : ";
    qu.printQueue();

    return 0;
}
