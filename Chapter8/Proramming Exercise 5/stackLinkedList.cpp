#include "stackLinkedList.h"
using namespace std;
#include <iostream>

void stackLinkedList::initializeStack(){

  stackTop=NULL;
  stackSize=0;
}
int stackLinkedList::returnTop(){

  return stackTop->entry;

}
 bool stackLinkedList::isEmptyStack() const{
    return(stackTop==NULL);

 }
bool stackLinkedList::isFullStack() const{
   return 0;

}
 void stackLinkedList::push(const int &newItem) {
      nodeType *newNode;
      newNode= new nodeType;
      newNode->entry=newItem;
      newNode->next=stackTop;
      stackTop=newNode;
      stackSize+=1;
 }
   int stackLinkedList::pop(){
       //to point to the node that stackTop is holding it now
      nodeType *tempNode;
      int temp;
      tempNode=new nodeType;
      //holding the last first node
      tempNode=stackTop;
      //putting the value of the node into the temp to be returned
      temp=stackTop->entry;
      //making stack stop hold the last second node
      stackTop=stackTop->next;
      //freeing the node in the memory
      delete tempNode;
      stackSize-=1;
   return temp;
   }
    int stackLinkedList::top() const {

     return stackTop->entry;
    }
    //assume that the user will first ask if the stack is empty or not
    void stackLinkedList::RemoveFromTop(){
      nodeType *tempNode= new nodeType;
      tempNode=stackTop;
      stackTop=stackTop->next;
      delete tempNode;
      stackSize-=1;
    }
     void stackLinkedList::clearStack(){
     nodeType *tempNode=new nodeType;
     tempNode=stackTop;
     while(tempNode){
        stackTop=stackTop->next;
        delete tempNode;
        tempNode=stackTop;
     }
     stackSize=0;
     }
      stackLinkedList ::~stackLinkedList(){
         clearStack();

      }
  /*  const stackLinkedList & stackLinkedList::copyStack(const stackLinkedList &otherStack){
      if(stackTop!=otherStack.stackTop){
             nodeType *newNode= new nodeType;
             newNode=otherStack.

      }
       return stackTop;


    }

        const stackLinkedList & operator=(const stackLinkedList &);







        */
