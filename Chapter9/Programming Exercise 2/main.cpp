#include <iostream>
#include "arrayListType.h"
using namespace std;

int main()
{
    arrayListType arr(20);
    arr.InsertEnd(20);
    arr.InsertEnd(30);
    arr.InsertEnd(40);
    arr.InsertEnd(50);
    arr.InsertEnd(60);
    cout<<arr.recBinarySearch(40,0,5);
    return 0;
}
