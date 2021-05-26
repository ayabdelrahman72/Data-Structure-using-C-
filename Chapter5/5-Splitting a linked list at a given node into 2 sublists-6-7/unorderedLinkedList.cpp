#include "unorderedLinkedList.h"
#include <stddef.h>
using namespace std;
#include <iostream>

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
  void unorderedLinkedList::divideAt(linkedListType &secondList,const int &item){
      nodeType *current;
      nodeType *trailCurrent;
      int sizeFirstList=1;
      current=first;
      bool found=false;
      if(current->entry==item){
        secondList.first=current;
        secondList.last=last;
        secondList.Count=Count;
         first=NULL;
        last=NULL;
        Count=0;
      }else{
      while(current!=NULL && !found){
           if(current->entry==item)
            found=true;
            else{
                trailCurrent=current;
                current=current->next;
                sizeFirstList+=1;
            }

      }
      if(current==NULL){
        secondList.first=NULL;
        secondList.last=NULL;
        secondList.Count=0;
      }else{

         secondList.first=current;
         secondList.last=last;
         secondList.Count=Count-sizeFirstList;
         last=trailCurrent;
         trailCurrent->next=NULL;
         Count=sizeFirstList;

      }
      }



  }
  void unorderedLinkedList::mergeLists(unorderedLinkedList &list1,unorderedLinkedList &list2){
    if(list1.first==NULL){
        first=list2.first;
        last=list2.last;
        Count=list2.Count;
        list2.first=NULL;
          list2.last=NULL;
          list2.Count=NULL;
    }else{
       if(list2.first==NULL){
          first=list1.first;
          last=list1.last;
          Count=list1.Count;
          list1.first=NULL;
          list1.last=NULL;
          list1.Count=NULL;
       }
          else{
         list1.last->next=list2.first;
         first=list1.first;
         last=list2.last;
         Count=list1.length()+list2.length();
         list1.first=NULL;
         list1.last=NULL;
         list1.Count=0;
         list2.first=NULL;
         list2.last=NULL;
         list2.Count=0;


          }

    }



}

