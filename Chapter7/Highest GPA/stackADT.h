#ifndef STACKADT_H
#define STACKADT_H


class stackADT
{
    public:
        virtual void initializeStack()=0;
        virtual bool isEmptyStack() const =0;
        virtual bool isFullStack() const=0;
        virtual void push(const int &newItem) =0;
        //this to return the top element without deleting it from the stack
        virtual int top() const =0;
        //this is from pull the element from the top then remove it from the stack
        virtual int pop() =0;
        //this for removing the top element from the stack
        virtual void RemoveFromTop()=0;

    protected:

    private:
};

#endif // STACKADT_H
