#include "stackType.h"
#include <iostream>
using namespace std;

stackType::stackType(int Size)
{
    if(Size<=0){
        cout<<"Size of stack must be positive......The stack was created of size 100 *Defualt Size*"<<endl;
        maxSize=100;
    }
    else
    maxSize=Size;

    stackTop=0;
    List=new int[maxSize];

}

  stackType::~stackType(){
  delete [] List;

  }

   void stackType::copyStack(const stackType&anotherStack){
    delete [] List;
    maxSize=anotherStack.maxSize;
    List= new int[maxSize];
    for(int i=0;i<anotherStack.stackTop -1;i++)
        List[i]=anotherStack.List[i];

     stackTop=anotherStack.stackTop;

   }
    bool stackType::operator==(const stackType &stack2){
        //checking first if the stackTop of the 2 stacks not equal so it will return 0 because that means that the 2 stacks does not equal each other
         if(stackTop ==stack2.stackTop){
                //this loop for check the values of each array starting from 0 till the stackTop
             for(int i=0;i<stackTop;i++){
                if(List[i]!=stack2.List[i]){
                    //if there's is value in stack1 doesn't equal the value of the stack2 and vice verse ,0 is returned and will not continue the rest of the statements in this function
                    return 0;
                }
             }
         //if we reaches at this point this means that we didn't enter the if condition and that means that the 2 stacks equal each other
             return 1;
         }
          return 0;

    }

const stackType& stackType :: operator=( const stackType &anotherStack){
  if( this!= &anotherStack){
       copyStack(anotherStack);
  }
  else
    return *this;

}

void stackType::initializeStack(){
stackTop=0;

}

bool stackType ::isFullStack() const{
   return(stackTop==maxSize);
}

bool stackType ::isEmptyStack() const{
   return(stackTop==0);
}
//we assume that the user will check that the stack in NOT FULL

void stackType ::push(const int &newItem){
    List[stackTop++]=newItem;

}
//we assume that the user will check that the stack in NOT EMPTY

int stackType::top() const {

return List[stackTop-1];
}
//we assume that the user will check that the stack in NOT EMPTY

int stackType::pop(){

    return List[--stackTop];
}
//we assume that the user will check that the stack in NOT EMPTY

 void stackType::RemoveFromTop(){
     stackTop--;


 }
