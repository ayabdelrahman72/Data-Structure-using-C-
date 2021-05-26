#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <stddef.h>
struct nodeType{
   int entry;//equals to info in the book
   nodeType *next;
   nodeType *previous; //equals to back in the book



};

class doublyLinkedList
{
    public:
        doublyLinkedList();
        doublyLinkedList(const doublyLinkedList &otherlist);
        ~doublyLinkedList();
        const doublyLinkedList &operator=(const doublyLinkedList&);
        void initializeList();
        bool isEmptyList()const;
        void destroy();
        void print()const;
        void reversePrint()const;
        int length() const; //return size of the list
        int returnFront()const;
        int returnBack() const;
        bool Search(const int &searchItem)const;
        void Insert(const int &newItem);
        void deleteNode(const int&deleteItem); ///doesn't work correctly

    protected:
          int Count; //to trace the size of the size increment 1 one the an item is inserted and decrement 1 when an item is deleted
         nodeType *first;//pointer to point to the first node in the list
         nodeType *last;//pointer point to the last node in the list
    private:
        //to assign otherlist to a new list
        //we make it private cause we will call it only in the copy constructor and in the overloading of the assignment operator
          void copyList(const doublyLinkedList &otherlist);

};

#endif // DOUBLYLINKEDLIST_H
