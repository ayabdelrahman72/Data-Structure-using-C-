#include <iostream>
#include "doublyLinkedList.h"
using namespace std;
                                                                                           ///GO AND FIX DELETE METHOD
int main()
{
    doublyLinkedList list1,list2;
    int num;
   ///TEST CASE 1:if list1 has a series of numbers and list2 is empty
    cout<<"Enter the values of the list1 and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    list1.Insert(num);
    cin>>num;
    }
    list1=list2;
    list1.print();
    cout<<"\n *******************************"<<endl;
    list1.destroy();
    list2.destroy();
     ///TEST CASE 2:if list1 has a series of numbers and list2 is has one number
     cout<<"Enter the values of the list1 and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    list1.Insert(num);
    cin>>num;
    }
    list2.Insert(20);
    list1=list2;
    list1.print();
     list1.destroy();
    list2.destroy();
     cout<<"\n *******************************"<<endl;
     ///TEST CASE 3:if list1 has a series of numbers and list2 is has also a series of numbers
      cout<<"Enter the values of the list1 and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    list1.Insert(num);
    cin>>num;
    }
     cout<<"Enter the values of the list2 and -999 to end"<<endl;
    cin>>num;
    while(num!=-999){
    list2.Insert(num);
    cin>>num;
    }
    list1=list2;
    list1.print();

                                                                                              ///Testing search ,reverse methods

     cout<<"\n*****************************"<<endl;
     cout<<"Enter the item that you wanna ask if it is in the list1 or not and -999 to skip it"<<endl;
    cin>>num;
    if(num!=-999){
    if(list1.Search(num))
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;
                }

    cout<<"List1: ";
    list1.print();
    cout<<endl;

    cout<<"Reverse List1: ";
    list1.reversePrint();
    cout<<endl;

    return 0;
}
