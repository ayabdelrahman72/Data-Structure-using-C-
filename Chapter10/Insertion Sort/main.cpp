#include <iostream>
#include "arrayListType.h"
using namespace std;

int main()
{
    arrayListType arr(5);
    arr.InsertEnd(5);
      arr.InsertEnd(20);
        arr.InsertEnd(2);
          arr.InsertEnd(7);
          arr.printArray();
          arr.insertionSort();
          cout<<endl;
          arr.printArray();

    return 0;
}
