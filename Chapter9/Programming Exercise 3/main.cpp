#include <iostream>
#include "arrayListType.h"
using namespace std;

int main()
{
    arrayListType  arr(20);
   arr.InsertEnd(2);
   arr.InsertEnd(3);
   arr.InsertEnd(4);
   arr.InsertEnd(5);
  cout<<arr.recSeqOrdSearch(5,0)<<endl;
   cout<<arr.recSeqOrdSearch(6,0);

    return 0;
}
