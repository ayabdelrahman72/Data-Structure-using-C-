#ifndef WAITINGCUSTOMERQUEUETYPE_H
#define WAITINGCUSTOMERQUEUETYPE_H
#include "queueArrayBased.h"
#include "customerType.h"
class waitingCustomerQueueType :public queueArrayBased<customerType>
{
    public:
        waitingCustomerQueueType(int Size=10);//the queue is initialized according to the parameter Size the value of the size is passed to the constructor  of arraybasedqueue
         void updateWaitingQueue();//increment the waiting time of each customer in the queue by one time unit

    protected:

    private:
};

#endif // WAITINGCUSTOMERQUEUETYPE_H
