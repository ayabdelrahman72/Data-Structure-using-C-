#include <iostream>
#include "unorderedLinkedList.h"
#include "linkedListType.h"
#include "orderedLinkedList.h"
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

   /* cout<<"Enter the item you wanna delete it"<<endl;
    cin>>num;
    unorderedList1.deleteNode(num);
    */

    cout<<"Unordered List1: ";
    unorderedList1.print();
    cout<<endl;

   unorderedList2=unorderedList1;
    cout<<"Unordered List2: ";
    unorderedList2.print();
    cout<<endl;
    /*
                                                         ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      orderedLinkedList orderedList1;
       orderedLinkedList orderedList2;
    cout<<"\t \t \t Ordered List \t \t \t"<<endl;
    cout<<"Enter the value of each item and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    orderedList1.insertFirst(num);
    cin>>num;
    }

    cout<<"Enter the item you wanna delete it"<<endl;
    cin>>num;
    orderedList1.deleteNode(num);

    cout<<"Ordered List1: ";
    orderedList1.print();
    cout<<endl;

    orderedList2=orderedList1;
    cout<<"Ordered List2: ";
    unorderedList2.print();
    cout<<endl;

*/



    return 0;
}
