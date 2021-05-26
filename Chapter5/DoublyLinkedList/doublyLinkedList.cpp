#include "doublyLinkedList.h"
#include <iostream>
using namespace std;
doublyLinkedList::doublyLinkedList()
{
    first=NULL;
    last=NULL;
    Count=0;
}
 bool doublyLinkedList::isEmptyList()const{

 return (Count==0); // or (first==NULL)
 }
 void doublyLinkedList::destroy(){
        while(first!=NULL){
            nodeType *current;
            current=first;
            first=first->next;
            delete current;
        }
        last=NULL;
        Count=0;
 }
 void doublyLinkedList::initializeList(){
     destroy();
 }
  doublyLinkedList::~doublyLinkedList(){
     destroy();
  }
    int doublyLinkedList::length() const{

    return Count;
    }
void doublyLinkedList::print()const{
    nodeType *current;
    current=first;
       while(current !=NULL){
        cout<<current->entry<<"\t";
        current=current->next;
       }
       cout<<endl;


    }
void doublyLinkedList::reversePrint()const{
   nodeType *current;
   current=last;
   while(current!=NULL){
    cout<<current->entry<<"\t";
    current=current->previous; //equals current=current->back in the book but i named this variable in the struct previous instead of back
   }
   cout<<endl;

}
bool doublyLinkedList::Search(const int &searchItem)const{

      nodeType *current;
      current=first;
      bool found=false;


      while(current!=NULL && !found){
          if(current->entry >= searchItem)
              found=true;
          else{
            current=current->next;
          }


      }
        if(found)
            found=(current->entry == searchItem);


          return found;

}
  int doublyLinkedList::returnFront()const{
        if(first!=NULL)
            return first->entry;
  }
int doublyLinkedList::returnBack() const{
       if(last!=NULL)
          return last->entry;

}
void doublyLinkedList::Insert(const int &newItem){
     nodeType *current;
     nodeType *trailCurrent;
     nodeType *newNode;
     newNode =new nodeType;
     newNode->entry=newItem;
     newNode->next=NULL;
     newNode->previous=NULL;
     if(first==NULL){
        first=newNode;
        last=newNode;
        Count=0;
     }else{
       bool found=false;
       current=first;
       while(current!=NULL && found){
        if(current->entry>=newItem)
            found=true;
        else{
            trailCurrent=current;
            current=current->next;
        }
       }

        if(current==first){
            newNode->next=first;
            first->previous=newNode;
            first=newNode;
            Count==1;
        }else{
             if(current!=NULL){
                newNode->next=current;
                newNode->previous=trailCurrent;
                current->previous=newNode;
                trailCurrent->next=newNode;

             }else{
                 //when we declare the newNode we declared that newNode->next=NULL so we didn't write it here again
              newNode->previous=trailCurrent;
              trailCurrent->next=newNode;
              last=newNode;

             }
              Count+=1;
        }
       }




}
 void doublyLinkedList::deleteNode(const int&deleteItem){
      if(first!=NULL){
           nodeType *current;
           nodeType *trailCurrent;
           bool found;
             if(first->entry==deleteItem){
                    first=first->next;

                    if(first==NULL){
                        last=NULL;
                    }else{
                        first->previous=NULL;
                    }
                    Count-=1;
                    delete current;
                }else{
                    found=false;
                    current=first;
                      while(current!=NULL && !found){
                //we assume that the list is ordered in ascending order so if the entry is larger the deleted item so we must stop
                                if(current->entry >= deleteItem)
                                     found=true;
                               else
                                    current=current->next;

                                    }//end while
                                     if(current == NULL)
            cout<<"The required item to be deleted not found in the list"<<endl;
           else{
           if(current->entry == deleteItem){

                //because when we went through the list to know the position of the deleteItem we moved with current pointer ONLY
                  trailCurrent=current->previous;
                  trailCurrent->next=current->next;

                  if(current->next!=NULL)
                     current->next->previous=trailCurrent;
                  if(current == last)
                    last=trailCurrent;

                   delete current;
                   Count-=1;

                  } else
             cout<<"The required item to be deleted not found in the list"<<endl;

                }
                }//end else of first->entry==deleteItem
                }else
                   cout<<"Opps... You're trying to delete an item from empty list"<<endl;


 }
 void doublyLinkedList::copyList(const doublyLinkedList &otherlist){
        if(first != NULL)
            destroy();

        if(otherlist.first==NULL){
                    first=NULL;
                    last=NULL;
                    Count=0;
                }else{
                    Count=otherlist.Count;
                  nodeType *newNode;
                  nodeType *current;
                  nodeType *prevNode;
                  current=otherlist.first;
                  first=new nodeType;
                  first->entry=current->entry;
                  first->next=NULL;
                  first->previous=NULL;
                  last=first;
                  current=current->next;
                  while(current!=NULL){
                    newNode=new nodeType;
                    newNode->entry=current->entry;
                    newNode->next=NULL;
                    newNode->previous=last;
                    last->next=newNode;
                    last=newNode;
                    current=current->next;
                  }

                }


 }
 const doublyLinkedList &doublyLinkedList::operator=(const doublyLinkedList&otherlist){

     copyList(otherlist);

    return *this;
 }

