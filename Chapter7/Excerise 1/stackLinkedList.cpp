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
bool stackLinkedList::operator==(const stackLinkedList &stack2){
    //if the size of the 2 stacks don't equal each other by logic that means the 2 stacks itself don't equal each other "stack's entries"
       if(stackSize !=stack2.stackSize){
            //here i made these 2 temps to not change the address that the stackTop points to
             nodeType *temp1,*temp2;
                temp1=stackTop;
                 temp2=stack2.stackTop;
              while(stackSize--){
                      //if there's is a value in stack1 doesn't equal the value of the stack2 and vice verse ,0 is returned and will not continue the rest of the statements in this function
                  if(temp1->entry!=temp2->entry){
                    return 0;
                  }else{
                      //for moving the temp to the next node reaching at the end to NULL
                     temp1=temp1->next;
                     temp2=temp2->next;

                  }
            }
            //if we reaches at this point this means that we didn't enter the if condition and that means that the 2 stacks equal each other
            return 1;

       }else
       return 0;



}
 /*   const stackLinkedList & stackLinkedList::copyStack(const stackLinkedList &otherStack){
      if(stackTop!=otherStack.stackTop){
             nodeType *newNode= new nodeType;
             newNode=otherStack.

      }
       return stackTop;


    }

        const stackLinkedList & operator=(const stackLinkedList &);







        */
