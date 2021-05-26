#include "queueArrayBased.h"
using namespace std;
#include <iostream>

queueArrayBased::queueArrayBased(int Size)
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
        arr= new int[maxQueueSize];//=*list in the book

}

queueArrayBased::~queueArrayBased()
{
    delete [] arr;
}


 bool queueArrayBased::isEmptyQueue()const
 {
      return (Count==0);
 }

  bool queueArrayBased::isFullQueue()const{

    return (Count==maxQueueSize);
  }

    void queueArrayBased::initializeQueue(){


        Count=0;
        queueFront=0; //when i delete an element i will delete it at index queueFront then increment queueFront by one
        queueRear=-1; //because when i add new element i will increment queueRear by 1 then add the element
        int*arr;//=*list in the book


    }

     int queueArrayBased::Front()const{
     if(!isEmptyQueue())
        return arr[queueFront];


     }

      int queueArrayBased::Back() const{
        if(!isEmptyQueue())
        return arr[queueRear];


      }

      void queueArrayBased::addQueue(const int &element){
        if(!isFullQueue()){
         queueRear=(queueRear+1)%maxQueueSize;
         Count++;
         arr[queueRear]=element;
        }else
          cout<<"Failed to ADD the element .. the queue is FULL !"<<endl;

      }

       void queueArrayBased::deleteQueue(){

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
