#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
#include "binaryTreeType.h"

class binarySearchTree :public binaryTreeType
{
    public:

        void Insert(const int insertItem);
         void deleteNode(const & deleteItem);


    protected:

    private:
          void deleteFromTree(binaryTreeNode * &p);

};

#endif // BINARYSEARCHTREE_H
