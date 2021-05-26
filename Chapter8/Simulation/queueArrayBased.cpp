#include "queueArrayBased.h"
using namespace std;
#include <iostream>
template <class type>
queueArrayBased<type>::queueArrayBased(int Size)
{
    if(Size>=0){
      maxQueueSize=Size;

    }else{
     cout<<"Size of queue must be Positive so the Queue now has a default size which is 100"<<endl;
     maxQueueSize=100;
    }
     Count=0;
        queueFront=0; //when i delete an element i will delete it at index queueFront then increment queueFront by one
        queueRear=-1; //because when i add new element i will increment queueRear by 1 then add the element
        arr= new type[maxQueueSize];//=*list in the book

}

template <class type>
queueArrayBased<type>::~queueArrayBased()
{
    delete [] arr;
}

template <class type>
 bool queueArrayBased<type>::isEmptyQueue()const
 {
      return (Count==0);
 }
template <class type>
  bool queueArrayBased<type>::isFullQueue()const{

    return (Count==maxQueueSize);
  }
template <class type>
     type queueArrayBased<type>::Front()const{
     if(!isEmptyQueue())
        return arr[queueFront];


     }
template <class type>
      type queueArrayBased<type>::Back() const{
        if(!isEmptyQueue())
        return arr[queueRear];


      }
template <class type>
      void queueArrayBased<type>::addQueue(const type &element){
        if(!isFullQueue()){
         queueRear=(queueRear+1)%maxQueueSize;
         Count++;
         arr[queueRear]=element;
        }else
          cout<<"Failed to ADD the element .. the queue is FULL !"<<endl;

      }
template <class type>
void queueArrayBased<type>::deleteQueue(){

           if(!isEmptyQueue()){

         queueFront=(queueFront+1)%maxQueueSize;
         Count--;

        }else
          cout<<"Failed to DELETE the element .. the queue is EMPTY !"<<endl;


       }
/*
 const queueArrayBased<type> &operator=(const &queueArrayBased<type>);







        queueArrayBased(const queueArrayBased<type> & other);
        ~queueArrayBased();
*/
