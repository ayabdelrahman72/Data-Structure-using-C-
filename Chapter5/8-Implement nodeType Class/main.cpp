#include <iostream>
#include "unorderedLinkedList.h"
using namespace std;

int main()
{  ///Here in Main i test the functionality of the methods ONLY to ensure that
    ///after changing STRUCT nodeType to CLASS nodeType there is NO change in all methods
    unorderedLinkedList unorderedList1,unorderedList2,unorderedList3;
    int num;

    cout<<"Enter the value of each item in List 1and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    unorderedList1.insertLast(num);
    cin>>num;
    }

   cout<<"Enter the value that you wanna the second list starts at and -999 to skip this step"<<endl;
   cin>>num;
   if(num!=-999){
    unorderedList1.divideAt(unorderedList2,num);
    unorderedList1.print();
    cout<<endl;
    unorderedList2.print();
    cout<<endl;
   }else{
     cout<<"Enter the value of each item in List 2 and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    unorderedList2.insertLast(num);
    cin>>num;
    }
   }

   cout<<"\n *************************************************** "<<endl;

   unorderedList3.mergeLists(unorderedList1,unorderedList2);
   cout<<"UnorderedList3 after the merging :";
   unorderedList3.print();
   cout<<endl;
   cout<<"UnorderedList1 after the merging :";
    unorderedList1.print();
    cout<<endl;
    cout<<"UnorderedList2 after the merging :";
    unorderedList2.print();
    cout<<endl;

    cout<<"\n *************************************************** "<<endl;

    unorderedList3.divideMid(unorderedList1);
    cout<<"UnorderedList3 after dividing it into TWO lists with almost same size and put the second list in UnorderedList1 :"<<endl;
   unorderedList3.print();
   cout<<endl;
   cout<<"UnorderedList1 :";
    unorderedList1.print();
    cout<<endl;
    return 0;
}
