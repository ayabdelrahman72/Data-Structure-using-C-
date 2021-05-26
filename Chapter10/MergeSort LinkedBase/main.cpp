#include <iostream>
#include "orderedLinkedList.h"
using namespace std;

int main()
{
   orderedLinkedList List,List2;
   List2.initializeLinkedList();
   List.initializeLinkedList();
int x=384;
nodeType *first2;
   List.insertFirst(x);
     List.insertFirst(x);
     /* List.insertFirst(x);
       List.insertFirst(x);
         List.insertFirst(x);
           List.insertFirst(x);
             List.insertFirst(x);
               List.insertFirst(x); */
    List.divideList(first2);
         List.print();

    return 0;
}
