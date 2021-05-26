#ifndef QUEUEARRAYBASED_H
#define QUEUEARRAYBASED_H
#include "queueADT.h"
                                             ///This class is the same as queueType in the book
template <class type>
class queueArrayBased :public queueADT<type>
{
    public:
        const queueArrayBased &operator=(const queueArrayBased&);
        bool isEmptyQueue() const;
         bool isFullQueue()const;
          void initializeQueue();
          type Front() const;//returns the first element of the queue preCondition:Queue is exists and not empty
        type Back() const;
      void addQueue(const type &element);
     void deleteQueue();
        queueArrayBased(int queueSize=100);
        queueArrayBased(const queueArrayBased & other);
        ~queueArrayBased();


    protected:

    private:
        int maxQueueSize;
        int Count;
        int queueFront;
        int queueRear;
        int *arr;//=*list in the book
};

#endif // QUEUEARRAYBASED_H

