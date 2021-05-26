#include <iostream>
#include "arrayListType.h"
using namespace std;

int main()
{
   arrayListType  arr(20);
   arr.InsertEnd(5);
   arr.InsertEnd(3);
   arr.InsertEnd(2);
  cout<<arr.seqSearch(90,0);
    return 0;
}
