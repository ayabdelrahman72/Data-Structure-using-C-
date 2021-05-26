#include "binarySearchTree.h"
using namespace std;
#include <iostream>

void binarySearchTree::Insert(const int insertItem){
      binaryTreeNode *newNode;
      binaryTreeNode *current;
      binaryTreeNode *trailCurrent;
      newNode= new binaryTreeNode;
      newNode->info=insertItem;
      newNode->llink=NULL;
      newNode->rlink=NULL;
      bool duplicatedItem=0; //if this variable has value 1 it means that the insertItem is already exists so we can't insert it again "duplication is NOT allowed
      if(root==NULL)
        root=newNode;
      else{
          current=root;
          while(current!=NULL){
            trailCurrent=current;
            if(newNode->info ==current->info)
                duplicatedItem=1;
            else
            if(current->info > insertItem)
                current=current->llink;
            else
                current=current->rlink;


          }
          if(!duplicatedItem){
          if(insertItem > trailCurrent->info)
               trailCurrent->rlink=newNode;
          else
            trailCurrent->llink=newNode;
          }


      }
   }
     void binarySearchTree::deleteNode(const & deleteItem){
          binaryTreeNode *current;
          binaryTreeNode *TrailCurrent;
          bool found=false;
          if(root ==NULL)
            cout<<"ERROR the Tree is Empty"<<endl;
          else
          if(root->info ==deleteItem)
              deleteFromTree(root);
          else{
              current=root;
              TrailCurrent=root;
              while(current !=NULL && !found){
                    if(current->info ==deleteItem)
                         found=true;
                    else{
                        TrailCurrent=current;
                        if(current->info > deleteItem)
                            current=current->llink;
                        else
                            current=current->rlink;


                    }
                    if(found){

                        if(TrailCurrent->info > deleteItem)
                              deleteFromTree(TrailCurrent->llink);
                        else
                            deleteFromTree(TrailCurrent->rlink);
                    }else
                        cout<<"item "<< deleteItem <<" is not found "<<endl;


              }

          }
     }
void binarySearchTree::deleteFromTree(binaryTreeNode * &p){
    binaryTreeNode *temp;
    binaryTreeNode *current;
    binaryTreeNode *trailCurrent;
    //here if p node doesn't have left or right link that means that node is a leaf node so deleting it will not cause any problem
          if(p->llink==NULL && p->rlink==NULL){
            temp=p;
            p=NULL;
            delete temp;

          }else //here P has only a left link so we must make P pointer point to the node that is in the left
                if(p->rlink==NULL)
                {
                    temp=p;
                    p=temp->llink;
                    delete temp;
                }
                else //here P has only a right link so we must make P pointer point to the node that is in the right
                if(p->llink ==NULL){
                    temp=p;
                    p=temp->rlink;
                    delete temp;
                }else{ //here the node has a right and left link so to delete that node w must hold the right most node in the left subtree
                             //because this node has the largest value in the left subtree so we can replace the values in the P with the value in the right most node in the left subtree
                   current=p->llink; //imagine here that current is holding now the "root" of the leftsubtree
                   trailCurrent=NULL;
                   //here this while loop stops when the current doesn't have right node so it means that current node is the most right node
                   while(current->rlink !=NULL){
                        trailCurrent=current;
                        current=current->rlink;


                   }
                   //replace the value in P node with the value in the current node
                  p->info=current->info;
                  //here if the trailCurrent is pointing to null it means so we didn't enter the while loop so the current node doesn't have right node
                   if(trailCurrent==NULL){
                     //so we make P node pointing to the left subtree of current node "hint:this subtree may be a real tree or only One node or empty so p->link will point to NULL"
                    p->llink=current->llink;
                   }else{
                       //here we make trailCurrent->rlink instead of pointing to current node it will be pointing to the leftsubtree of the current node "hint agian:his subtree may be a real tree or only One node or empty so trailCurrent->link will point to NULL
                       //for sure current doesn't have right subtree because this node is the most right node
                      trailCurrent->rlink=current->llink;


                   }
                   //Finally delete current node
                   delete current;



                }




       }

