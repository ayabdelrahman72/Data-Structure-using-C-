#ifndef LINKEDQUEUETYPE_H
#define LINKEDQUEUETYPE_H
#include "queueADT.h"

struct nodeType{
   int entry;
   nodeType *next;

};

class linkedQueueType :public queueADT
{
    public:
        const linkedQueueType&operator=(const linkedQueueType& other); ///NEW
        bool isEmptyQueue() const;
        bool isFullQueue()const;
        void initializeQueue();
        int Front()const;
        int Back()const;
        void addQueue(const int &element);
        void deleteQueue();
        linkedQueueType();
        linkedQueueType(const linkedQueueType &other);
        ~linkedQueueType();
        void destroyQueue(); ///NEW

    protected:

    private:
        nodeType *queueFront;
        nodeType*queueRear;
     void copyQueue(const linkedQueueType &other);  ///NEW
};

#endif // LINKEDQUEUETYPE_H
