#ifndef LINKEDLISTTYPE_H
#define LINKEDLISTTYPE_H
struct nodeType{
   int entry;
   nodeType *next;

};


class linkedListType
{
    public:
        //default contructor
        linkedListType();
        //copy contructor
        linkedListType(const linkedListType &otherList);
        //destructor
        ~linkedListType();
        const linkedListType& operator=(const linkedListType &);
        void initializeLinkedList();
        bool isEmpty();
        void print() const;
        int length() const;
        void destroyList();
        //return the first element in the list
        //Precondition:The list must exist and must not be empty
        //PostCondition:If the list is empty the program terminates .otherwise, the first element of the list is returned
        int returnFront();
        //return the last element in the list
        //Precondition:The list must exist and must not be empty
        //PostCondition:If the list is empty the program terminates .otherwise, the last element of the list is returned
        int returnBack();
        //this function is pure virtual because every class inherit from that class must declare this function
        //and by making this function pure it make this class abstract class so we can't instantiate an object from that class
        virtual bool Search(const int &item)const =0;
        //PostCondition:new item will be inserted at the beginning of the list ,first will point to new item  and last will only point to new item if newItem is the first node in the list
        //size will be incremented by one
        virtual void insertFirst(const int& newItem)=0;
        //PostCondition:new item will be inserted at the end of the list ,last will point to newItem  and first will only point to newItem if newItem is the first node in the list
        //size will be incremented by one
        virtual void insertLast(const int& newItem)=0;
        //IF found,the node containing this item will be deleted ,first will point to first node and last will point to the last node in the list
        //The size will be decremented by one
        virtual void deleteNode(const int &deleteItem)=0;
        void divideList(nodeType *first2);///NEW



    protected:
        int Count;
        nodeType *first;
        nodeType *last;

    private:
        //this function is private cause it will be only called in the copy constructor and assignment operator overloading
        void copyList(const linkedListType &otherList);

};

#endif // LINKEDLISTTYPE_H
