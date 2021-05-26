#include "stackLinkedList.h"
using namespace std;
#include <iostream>

void stackLinkedList::initializeStack(){

  stackTop=NULL;
  stackSize=0;
}

 bool stackLinkedList::isEmptyStack() const{
    return(stackTop==NULL);

 }

 void stackLinkedList::push(const binaryTreeNode newItem) {
      nodeType *newNode;
      newNode= new nodeType;
      newNode->entry=newItem;
      newNode->next=stackTop;
      stackTop=newNode;
      stackSize+=1;
 }
   binaryTreeNode stackLinkedList::pop(){
       //to point to the node that stackTop is holding it now
      nodeType *tempNode;
      binaryTreeNode temp;
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
