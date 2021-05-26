#ifndef QUEUEADT_H
#define QUEUEADT_H


class queueADT
{
    public:
     virtual bool isEmptyQueue() const=0;
     virtual bool isFullQueue()const=0;
     virtual void initializeQueue()=0;
     virtual int Front() const=0;//returns the first element of the queue preCondition:Queue is exists and not empty
     virtual int Back() const=0;
     virtual void addQueue(const int element)=0;
     virtual void deleteQueue()=0;



    protected:

    private:
};

#endif // QUEUEADT_H
