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

       first->entry=current->entry;
       first->next=NULL;
       last=first;
       current=current->next;
        while(current!=NULL){
        newNode=new nodeType;
        newNode->entry=current->entry;
        newNode->next=NULL;
        last->next=newNode;
        last=newNode;
        current=current->next;

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
           first=first->next;
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
       cout<<current->entry<<"\t";
       current=current->next;
   }

}
 int linkedListType::length() const{
   return Count;
 }
int linkedListType::returnFront(){
     if(first !=NULL)
        return first->entry;
     else
     // I assume that the list doesn't have a 0 value and the user Know if the list is empty it will return 0
        return 0;
}
int linkedListType::returnBack(){
       if(last !=NULL)
        return last->entry;
        else
         // I assume that the list doesn't have a 0 value and the user Know if the list is empty it will return 0
            return 0;

}


linkedListType:: ~linkedListType(){

destroyList();
}
