#include <iostream>
#include "binarySearchTree.h"
#include "stackLinkedList.h"
using namespace std;

int main()
{
    binarySearchTree tree;
    tree.Insert(20);
    tree.Insert(443);
    tree.Insert(40);
    tree.Insert(253);
     tree.deleteNode(253);

      /*  tree.postorderTraversal();
        cout<<endl;

        tree.preorderTraversal();
        */
        tree.inorderTraversal();
         cout<<endl;
         tree.nonRecInorderTraversal();
    return 0;
}
