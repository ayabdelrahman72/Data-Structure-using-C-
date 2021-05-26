#include "linkedQueueType.h"
#include <stddef.h>
#include <iostream>
using namespace std;

linkedQueueType::linkedQueueType()
{
    queueFront=NULL;
    queueRear=NULL;
}

bool linkedQueueType::isEmptyQueue() const{

return(queueFront==NULL);

}

bool linkedQueueType::isFullQueue()const{

return 0;

}
//this operation if the queue already has element it must deallocate all the elements

void linkedQueueType::initializeQueue(){
   nodeType*temp;
   while(queueFront!=NULL){
    temp=queueFront;
    queueFront=queueFront->next;
    delete temp;


   }
    queueRear=NULL;


}

void linkedQueueType::addQueue(const int &element){
nodeType*newNode=new nodeType;
newNode->entry=element;
newNode->next=NULL;
if(queueRear==NULL){
    queueFront=newNode;
}else
   queueRear->next=newNode;

   queueRear=newNode;
}


 void linkedQueueType::deleteQueue(){
     if(!isEmptyQueue()){
 if(queueFront==queueRear)
 {
     delete queueFront;
     queueFront=NULL;
     queueRear=NULL;
 }else
   {
       nodeType *temp=queueFront;
       queueFront=queueFront->next;
       delete temp;
   }         }else
                  cout<<"The queue is already empty"<<endl;

 }

  int linkedQueueType::Front()const{
     if(!isEmptyQueue()){
        return queueFront->entry;
     }else
      cout<<"The queue is Empty"<<endl;


  }

int linkedQueueType::Back()const{

 if(!isEmptyQueue()){
        return queueRear->entry;
     }else
      cout<<"The queue is Empty"<<endl;


}
 linkedQueueType::~linkedQueueType(){

   initializeQueue();
 }
/*
 const linkedQueueType<type>&operator=(const linkedQueueType<type>& other);






        linkedQueueType(const linkedQueueType<type>&other);


*/
