#ifndef STACKTYPE_H
#define STACKTYPE_H

class stackType
{
    public:
        stackType(int stackSize=100);
        ~stackType();
        const stackType & operator=(const stackType &);
        void initializeStack();
        bool isEmptyStack() const;
        bool isFullStack() const;
        void push(const int &newItem) ;
        int top() const ;
        int pop();
        void RemoveFromTop();
         bool operator==(const stackType &);

    protected:

    private:
        int maxSize;
        int stackTop;
        int *List;
        void copyStack(const stackType &);
};

#endif // STACKTYPE_H
