#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H
typedef struct nodeType{
      int entry;
      nodeType *next;
}nodeType;

class stackLinkedList
{
    public:

       ~stackLinkedList();
        const stackLinkedList & operator=(const stackLinkedList &);
        bool operator==(const stackLinkedList &);
        void initializeStack();
        bool isEmptyStack() const;
        bool isFullStack() const;
        void push(const int &newItem) ;
        int top() const ;
        int pop();
        void RemoveFromTop();
        void clearStack();
        int returnTop();


    protected:

    private:
        nodeType *stackTop;
        int stackSize;
        const stackLinkedList & copyStack(const stackLinkedList &);
};

#endif // STACKLINKEDLIST_H
