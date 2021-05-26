#include "unorderedLinkedList.h"
#include <stddef.h>
using namespace std;
#include <iostream>
///NEW
///NOTE:This algorithm is different from the one that is written in the book but the result is the same
void unorderedLinkedList::insertionSort(){
    //firstly i checked that the list is empty or not
    if(first==NULL){
        cout<<"The last is already empty"<<endl;
    }else
    //If first->next points to NULL that means that the list already has one element so we don't need to order the list
      if(first->next!=NULL){
   int i=0;
        nodeType *firstOutOfOrder;
        nodeType *previous;
        nodeType *current;
       nodeType *trailCurrent;
       //here previous pointer means the node that is before the outOfOrder element
       //and i use it only to make this node point to the node that is after the outOfOrder element
        previous=first;
        firstOutOfOrder=previous->next;
  //if firstOutOfOrder element==NULL that means implicitly that the list is sorted
     while(firstOutOfOrder !=NULL){
            //here i sort the list in ascending order so if firstOutOfOrder is the less previous that means that this element is outOfOrder
        if(firstOutOfOrder->entry < previous->entry){
        //firstly we check if the element can be put as the first element of the list or not
            if(first->entry >= firstOutOfOrder->entry){
                 previous->next=firstOutOfOrder->next;
                firstOutOfOrder->next=first;
                first=firstOutOfOrder;
            }
            //IF NOT that means we must search for the proper position for this element so we start from the second element of the list to the last element
          else{
              current=first->next;
               trailCurrent=first;
               //if current->entry is greater than firstOfOrder->entry that means we must put outOfOrder element before current but after trailCurrent "between them"
               while(current->entry < firstOutOfOrder->entry){
                 trailCurrent=current;
                current=current->next;

               }
               previous->next=firstOutOfOrder->next;
                 firstOutOfOrder->next=current;
                trailCurrent->next=firstOutOfOrder;


            }
        }
  //these 2 statements for advancing the pointer to make them point to all the elements in the list
  // for ensuring that every element is put in the right place according to ascending order
  previous=firstOutOfOrder;
  firstOutOfOrder=firstOutOfOrder->next;


     }
      }

}
bool unorderedLinkedList::Search(const int &item)const{
        nodeType *current;
        bool found=false;
        current=first;
        while(current!=NULL && !found)
        {
            if(current->entry==item)
                found=true;
            else
            current=current->next;
        }
        return found;


  }
  void unorderedLinkedList::insertFirst(const int& newItem){
      nodeType *newNode=new nodeType;
      newNode->entry=newItem;
      newNode->next=first;
      first=newNode;
      Count+=1;

      if(last==NULL)
        last=newNode;


  }

  void unorderedLinkedList::insertLast(const int& newItem){
            nodeType *newNode=new nodeType;
           newNode->entry=newItem;
           newNode->next=NULL;
           if(first==NULL){
            first=newNode;
            last=newNode;
           Count+=1;//or make more sense to make Count equal to 1 because it will be the first node entered so the size of the array will be 1
           }else
           {
               last->next=newNode;
               last=newNode;
               Count+=1;


           }

  }
  void unorderedLinkedList::deleteNode(const int& requiredItem){
      nodeType *current;
      nodeType *trailCurrent;
      if(first==NULL)
        cout<<" ERROR...You're trying to remove an item from empty list !!"<<endl;
      else{
        if(first->entry==requiredItem)
        {
            current=first;
            first=NULL;
            last=NULL;
            delete current;
            Count=0;
        }else{
            trailCurrent=first;
            current=first->next;
            bool found=false;
            while(current!=NULL && !found){
                    if(current->entry==requiredItem){
                        found=true;
                    }
                trailCurrent=current;
                current=current->next;
            }
            if(found==true){
                trailCurrent->next=current->next;
                Count-=1;
                if(current->next==NULL){
                   last=trailCurrent;
                   delete current;
                }
            }else
              cout<<"Opps...The item to be deleted is not in the list"<<endl;


        }

      }

  }
