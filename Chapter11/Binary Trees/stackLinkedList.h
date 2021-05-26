#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H

struct binaryTreeNode{
  int info;
  binaryTreeNode *llink;
  binaryTreeNode *rlink;

};
 struct nodeType{
      binaryTreeNode entry;
      nodeType *next;
};

class stackLinkedList
{
    public:

       ~stackLinkedList();
        const stackLinkedList & operator=(const stackLinkedList &);
        void initializeStack();
        bool isEmptyStack() const;
        void push(const binaryTreeNode newItem) ;
        binaryTreeNode pop();




    protected:

    private:
        nodeType *stackTop;
        int stackSize;
        const stackLinkedList & copyStack(const stackLinkedList &);
};

#endif // STACKLINKEDLIST_H
