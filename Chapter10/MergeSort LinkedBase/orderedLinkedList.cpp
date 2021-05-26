#include "orderedLinkedList.h"
#include <stddef.h>
using namespace std;
#include <iostream>
 bool orderedLinkedList::Search(const int &item)const{
    bool found=false;
    nodeType *current=first;
    while(current!=NULL && !found){
        if(current->entry>=item)
            found=true;
        else
            current=current->next;
    }
    if(found)
        found=(current->entry==item);

        return found;
 }
  void orderedLinkedList::Insert(const int& newItem){
       nodeType *current;
       nodeType *newNode;
       nodeType *trailCurrent;
       newNode=new nodeType;
       newNode->entry=newItem;
       newNode->next=NULL;

       if(first==NULL){
        first=newNode;
        last=newNode;
        Count==1;
       }else{
          bool found=false;
                    current=first;
          while(current!=NULL && !found){
                //first if condition
              if(current->entry>=newItem)
                found=true;
              else{
                trailCurrent=current;
                current=current->next;
              }

          }
          //when current equal first that means that in the first if condition we didn't entered the else condition and found=true in the first check and implicitly it means that newItem is less than the value of the only node in the list
          if(current==first){
               newNode->next=first;
                first=newNode;
                Count+=1;
          }
          else{
            newNode->next=current;
            trailCurrent->next=newNode;
            Count+=1;
            //when current==NULL that means that newNode it will be the last node in the list so we will make last pointer point to the newNode
            //cause this is the last node and if we don't make this step last pointer will be point to the second node from the end not the last node
            if(current==NULL)
                last=newNode;
          }
       }
  }
void orderedLinkedList::insertFirst(const int& newItem){

  Insert(newItem);
}
 void orderedLinkedList::insertLast(const int& newItem){
   Insert(newItem);

 }
void orderedLinkedList::deleteNode(const int &deletedItem){
                 nodeType *current;
                 nodeType *trailCurrent;
                 bool found;
                 if(first==NULL)
                    cout<<"Oops.. You're trying to delete an item from empty list"<<endl;
                 else{
                    current=first;
                     found=false;
                    while(current!=NULL && !found){
                        if(current->entry >=deletedItem)
                            found=true;
                        else{
                            trailCurrent=current;
                            current=current->next;
                        }

                    }
                    if(current==NULL)
                        cout<<"Oops... this item isn't in this list"<<endl;
                    else{
                            if(current->entry==deletedItem){
                                       if(first==current)
                                    {
                                        first=first->next;
                                        delete current;
                                        Count-=1;
                                    }else{
                                        trailCurrent->next=current->next;
                                        //this means that the last node is deleted so we must make the last pointer point to the trailCurrent node
                                        //because now it becomes the last node in the list
                                        if(trailCurrent->next==NULL)
                                             last=trailCurrent;
                                        delete current;
                                        Count-=1;

                                    }
                        }else
                        cout<<"Oops... this item isn't in this list"<<endl;
                    }
                 }
}
