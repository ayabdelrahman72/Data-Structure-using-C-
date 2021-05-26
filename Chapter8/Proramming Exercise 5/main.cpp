#include <iostream>
#include "queueArrayBased.h"
#include "stackLinkedList.h"
using namespace std;

int main()
{
    int len,num,remainder,flag=1;
    stackLinkedList stac;
    cout<<"Enter the length of the number"<<endl;
    cin>>len;
    queueArrayBased qu(len);

   cout<<"Enter the number"<<endl;
   cin>>num;
   while(num!=0){
        remainder=num%10; //if the number if 5467 the first iteration the remainder will be 7 and in the second iteration remainder will be 6 and so on
        stac.push(remainder); //put 7 in the stack
        qu.addQueue(remainder);//put 7 in the queue
        /// the difference between stack and queue of how each of them retrieve the data not insert from the user point of view
        num/=10; //in the first iteration to remove digit 7 from the number so the number will be 546 and in the second iteration will be 54 and so on
   }

   while(!qu.isEmptyQueue()){
    //in the first iteration we will compare 5(stack) with 7(queue) so they don't equal each other so the flag will be zero and while loop will be puased
   if(stac.pop()!=qu.Front()){
    flag=0;
    break;
   }
   qu.deleteQueue();


   }

  if(flag)
    cout<<"Palindrome"<<endl;
  else
    cout<<"NOT Palindrome"<<endl;


    return 0;
}
