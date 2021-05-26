#ifndef UNORDEREDLINKEDLIST_H
#define UNORDEREDLINKEDLIST_H
#include "linkedListType.h"
#include <stddef.h>
using namespace std;
#include <iostream>
class unorderedLinkedList :public linkedListType
{
    public:

          bool Search(const int &item)const;
        //PostCondition:new item will be inserted at the beginning of the list ,first will point to new item  and last will only point to new item if newItem is the first node in the list
        //size will be incremented by one
        void insertFirst(const int& newItem);
        //PostCondition:new item will be inserted at the end of the list ,last will point to newItem  and first will only point to newItem if newItem is the first node in the list
        //size will be incremented by one
         void insertLast(const int& newItem);
        //IF found,the node containing this item will be deleted ,first will point to first node and last will point to the last node in the list
        //The size will be decremented by one
         void deleteNode(const int &deleteItem);
        void divideAt(linkedListType &secondList,const int &item);
        void mergeLists(unorderedLinkedList &list1,unorderedLinkedList &list2);

    protected:

    private:
};



#endif // UNORDEREDLINKEDLIST_H
