#include "linkedListType.h"
#include <stddef.h>
using namespace std;
#include <iostream>
linkedListType::linkedListType()
{
    first=NULL;
    last=NULL;
    Count=0;
}
void linkedListType::copyList(const linkedListType &otherList){
       if(first!=NULL)
          destroyList();
       if(otherList.first ==NULL){
        last=NULL;
        Count=0;
       }
        else{
        nodeType * newNode;
        nodeType *current;

        current=otherList.first;
       Count=otherList.Count;

       first->setEntry(current->getEntry());
       first->setNext(NULL);
       last=first;
       current=current->getNext();
        while(current!=NULL){
        newNode=new nodeType;
        newNode->setEntry(current->getEntry());
        newNode->setNext(NULL);
        last->setNext(newNode);
        last=newNode;
        current=current->getNext();

        }
       }

}
linkedListType::linkedListType(const linkedListType &otherlist)
{
    //i wrote here first=null ONLY and didn't write last=NULL and count =0
    //because we here initialize the list with another list values so we should firstly make first=null and in the copylist function
    //last point to the first node and Count will have the size of the otherlist
    first=NULL;
    copyList(otherlist);

}
const linkedListType& linkedListType::operator=(const linkedListType &otherlist){
    if(this != &otherlist)
        copyList(otherlist);

    return *this;

}
 bool linkedListType::isEmpty(){

 return (Count==0);
 //or we may check using first if (first==NULL)
 }
void linkedListType::destroyList(){
    nodeType *temp;

      while(first!=NULL){
           temp=first;
           first=first->getNext();
           delete temp;
      }
      last=NULL;
      Count=0;
}
void linkedListType::initializeLinkedList(){
   destroyList();

}
void linkedListType::print() const{
   nodeType *current;
   current=first;
   while(current!=NULL){
       cout<<current->getEntry()<<"\t";
       current=current->getNext();
   }

}
 int linkedListType::length() const{
   return Count;
 }
int linkedListType::returnFront(){
     if(first !=NULL)
        return first->getEntry();
     else
     // I assume that the list doesn't have a 0 value and the user Know if the list is empty it will return 0
        return 0;
}
int linkedListType::returnBack(){
       if(last !=NULL)
        return last->getEntry();
        else
         // I assume that the list doesn't have a 0 value and the user Know if the list is empty it will return 0
            return 0;

}
 void linkedListType::divideMid(linkedListType &sublist){
     int len;
      nodeType *current;
      nodeType *temp=new nodeType;
      current=first;
       if(length()%2==0){
        len=(length()/2)-1;

       }else{
         len=length()/2;
       }
        for(int i=0;i<len;i++){
            current=current->getNext();
        }
        sublist.first=current->getNext();
        last=current;
        sublist.last=NULL;
         current->setNext(NULL);
         sublist.Count=length()/2;



 }

linkedListType:: ~linkedListType(){

destroyList();
}
