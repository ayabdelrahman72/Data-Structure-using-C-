#include "binaryTreeType.h"
#include <iostream>
using namespace std;
binaryTreeType::binaryTreeType()
{
    root=NULL;
}
  bool binaryTreeType::isEmpty()const{
   return (root==NULL);
  }
   void binaryTreeType::inorderTraversal()const{
    inorder(root);

    }
    void binaryTreeType::inorder(binaryTreeNode *p)const{
        if(p!= NULL){
      inorder(p->llink);
      cout<<p->info<<"\t";
      inorder(p->rlink);
        }

    }
    void binaryTreeType::preorderTraversal()const{
    preorder(root);

    }
    void binaryTreeType::preorder(binaryTreeNode *p)const{
         if(p!= NULL){
      cout<<p->info<<"\t";
      preorder(p->llink);
      preorder(p->rlink);
        }


       }
    void binaryTreeType::postorderTraversal()const{

    postorder(root);
    }
     void binaryTreeType::postorder(binaryTreeNode *p)const{
         if(p!= NULL){

      postorder(p->llink);
      postorder(p->rlink);
       cout<<p->info<<"\t";
        }

       }

  int binaryTreeType::height(binaryTreeNode *p){

  if(p==NULL)
    return 0;
  else
    return 1+max(height(root->llink),height(root->llink));


  }
   int binaryTreeType::max(int x,int y){
     if(x>y)
        return y;
     else
        return x;

   }
 int binaryTreeType::treeHeight(){

 return height(root);
 }
  int binaryTreeType::treeNodeCount()const{
  nodeCount(root);

  }
int binaryTreeType::treeLeavesCount()const{

leavesCount(root);
}
 binaryTreeType::binaryTreeType(const binaryTreeType &otherTree){
 if(otherTree.root==NULL)
      root=NULL;
      else
        copyTree(root,otherTree.root);

 }
    void binaryTreeType::copyTree(binaryTreeNode* &copiedTreeRoot,binaryTreeNode * otherTreeNode){
      if(otherTreeNode ==NULL)
               copiedTreeRoot=NULL;
      else{
          copiedTreeRoot=new binaryTreeNode;
          copiedTreeRoot->info=otherTreeNode->info;
          copyTree(copiedTreeRoot->llink,otherTreeNode->rlink);
          copyTree(copiedTreeRoot->rlink,otherTreeNode->rlink);


      }

    }
     void binaryTreeType::destroy(binaryTreeNode * &p){
            if(p!=NULL){
                destroy(p->llink);
                destroy(p->rlink);
                delete p;
            }

     }
      void binaryTreeType::destroyTree(){
                      destroy(root);
                      root=NULL;

      }
      binaryTreeType::~binaryTreeType(){

      destroyTree();

      }
      const binaryTreeType &binaryTreeType::operator=(binaryTreeType &otherTree){
           if(this !=&otherTree){
         if(otherTree.root==NULL || root !=NULL)
            destroyTree();

             copyTree(root,otherTree.root);



      }
      return *this;
      }
        int binaryTreeType::nodeCount(binaryTreeNode *p)const{

        }
        int binaryTreeType::leavesCount(binaryTreeNode *p)const{


        }
         void binaryTreeType::nonRecInorderTraversal()const{

          binaryTreeNode *current;
            stackLinkedList stack1;
            current=root;
            while(current !=NULL || (!stack1.isEmptyStack())){
                if(current!=NULL){
                    stack1.push(current);
                    current=current->llink;
                }else{

                    current=stack1.pop();
                    cout<<current->info<<"\t";
                    current=current->rlink;


                }
            }



         }


/*
        ///Private functions










*/
