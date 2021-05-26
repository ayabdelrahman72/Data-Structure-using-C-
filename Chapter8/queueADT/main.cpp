#include <iostream>
#include "queueArrayBased.h"
#include "linkedQueueType.h"
using namespace std;

int main()
{
   queueArrayBased que;
   que.addQueue(20);
   que.addQueue(5);
  cout<<que.Front()<<endl;

  linkedQueueType qu;
  qu.initializeQueue();
  qu.addQueue(20);
  qu.addQueue(4);
  cout<<qu.Back();
    return 0;
}
