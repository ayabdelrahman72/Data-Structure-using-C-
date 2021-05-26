#ifndef QUEUEARRAYBASED_H
#define QUEUEARRAYBASED_H
#include "queueADT.h"
                                             ///This class is the same as queueType in the book

class queueArrayBased :public queueADT
{
    public:
        const queueArrayBased &operator=(const queueArrayBased&);
        bool isEmptyQueue() const;
         bool isFullQueue()const;
          void initializeQueue();
          int Front() const;//returns the first element of the queue preCondition:Queue is exists and not empty
        int Back() const;
      void addQueue(const int &element);
     void deleteQueue();
        queueArrayBased(int queueSize=100);
        queueArrayBased(const queueArrayBased & other);
        ~queueArrayBased();
      void moveNthFront(int position); ///NEW
      void printQueue();///NEW


    protected:

    private:
        int maxQueueSize;
        int Count;
        int queueFront;
        int queueRear;
        int *arr;//=*list in the book
};

#endif // QUEUEARRAYBASED_H

