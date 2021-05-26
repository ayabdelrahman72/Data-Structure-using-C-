#include <iostream>
#include "unorderedLinkedList.h"
using namespace std;

int main()
{
    unorderedLinkedList unorderedList1,unorderedList2;
    int num;

    cout<<"Enter the value of each item and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    unorderedList1.insertFirst(num);
    cin>>num;
    }
    unorderedList1.diviedMid(unorderedList2);
    unorderedList1.print();
    cout<<endl;
    unorderedList2.print();
    return 0;
}
