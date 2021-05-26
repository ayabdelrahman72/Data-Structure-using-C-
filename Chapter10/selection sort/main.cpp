#include <iostream>
#include "arrayListType.h"
using namespace std;

int main()
{
    arrayListType arr(5);
    arr.InsertEnd(4);
    arr.InsertEnd(10);
    arr.InsertEnd(3);
    arr.InsertEnd(8);
    arr.InsertEnd(20);
    cout<<"The array before sorting it : "<<endl;
    arr.printArray();
    cout<<"The array after sorting it :"<<endl;
    arr.selectionSearch();
    arr.printArray();

    return 0;
}
