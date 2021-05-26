#ifndef BINARYTREETYPE_H
#define BINARYTREETYPE_H
#include "stackLinkedList.h"

class binaryTreeType
{
    public:
         ~binaryTreeType();
        binaryTreeType();
        binaryTreeType(const binaryTreeType &);
        const binaryTreeType &operator=(binaryTreeType &);
        bool isEmpty()const;
        void inorderTraversal()const;
        void preorderTraversal()const;
        void postorderTraversal()const;
        int treeHeight();
        int treeNodeCount()const;
        int treeLeavesCount()const;
        void destroyTree();
       void nonRecInorderTraversal()const;

    protected:
        binaryTreeNode *root; // we defined as protected so we can later derive special binary trees

    private:
        void copyTree(binaryTreeNode* &copiedTreeRoot,binaryTreeNode * otherTreeNode);
        void destroy(binaryTreeNode * &p);//to destroy the binary tree which p points to
        void inorder(binaryTreeNode *p)const; //to traverse the binary tree which p points to
          void preorder(binaryTreeNode *p)const; //to traverse the binary tree which p points to
            void postorder(binaryTreeNode *p)const; //to traverse the binary tree which p points to
        int height(binaryTreeNode *p);
         int nodeCount(binaryTreeNode *p)const;
          int leavesCount(binaryTreeNode *p)const;
           void nonRecInorder(binaryTreeNode *p)const;

        int max(int x,int y);

};

#endif // BINARYTREETYPE_H
