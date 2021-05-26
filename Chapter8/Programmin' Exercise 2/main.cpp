#include <iostream>
#include "linkedQueueType.h"
using namespace std;

int main()
{
    linkedQueueType qu,qu2;
    qu.addQueue(20);
    qu.addQueue(30);
    qu2=qu;
   linkedQueueType qu3(qu2);
   cout<<qu3.Front()<<endl;
  cout<< qu3.Back()<<endl;




    return 0;
}
