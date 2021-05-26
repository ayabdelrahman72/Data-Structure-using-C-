#include <iostream>
#include "arrayListType.h"
using namespace std;

int main()
{
  arrayListType arr(6);
  arr.InsertEnd(9);
  arr.InsertEnd(10);
  arr.InsertEnd(8);
  arr.InsertEnd(20);
  arr.InsertEnd(1);
  arr.InsertEnd(3);
  arr.printArray();
  arr.quickSort();
  arr.printArray();
    return 0;
}
