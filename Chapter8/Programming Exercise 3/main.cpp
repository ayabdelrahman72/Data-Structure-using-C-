#include <iostream>
#include "queueArrayBased.h"
using namespace std;

int main()
{
   queueArrayBased qu(5);
   if(qu.isEmptyQueue()){
      cout<<"The queue is EMPTY"<<endl;
   }else
     cout<<"The queue is NOT empty"<<endl;
    qu.addQueue(3);//1
    qu.addQueue(2);//2
    qu.addQueue(5);//3
    qu.addQueue(5);//4
    qu.addQueue(7);//5 so this element will not added

   qu.deleteQueue();//the queue has 3 elements so he is  NOT  FULL
    if(qu.isFullQueue()){
      cout<<"The queue is FULL"<<endl;
   }else
     cout<<"The queue is NOT full"<<endl;
     qu.deleteQueue();//the queue has 2 elements
     qu.addQueue(20);//3
     qu.addQueue(50);//4 the queue is full now
     qu.addQueue(30);//5 so failed to add element 30

    return 0;
}
