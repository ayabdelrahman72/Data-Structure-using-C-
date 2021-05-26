#include <iostream>
#include "unorderedLinkedList.h"
using namespace std;

int main()
{
    unorderedLinkedList List;

    List.insertLast(7);
      List.insertLast(5);
        List.insertLast(3);
          List.insertLast(2);
          List.print();
          cout<<endl;
          List.insertionSort();
          List.print();
    return 0;
}
