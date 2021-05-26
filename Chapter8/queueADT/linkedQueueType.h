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
        const linkedQueueType&operator=(const linkedQueueType& other);
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

    protected:

    private:
        nodeType *queueFront;
        nodeType*queueRear;
};

#endif // LINKEDQUEUETYPE_H
