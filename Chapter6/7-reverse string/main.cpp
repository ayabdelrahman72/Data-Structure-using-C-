#include <iostream>
#include "string.h"
using namespace std;
void reverseString(string s){
    //this is the base case if the size is one so we will return the first character in the string
    if(s.size()==1)
         cout <<s[0];
    else{
    //print the last character
     cout<<s[s.size()-1];
    //remove the last character cause we already printed it example abcd we print d and removed so we pass to reserseString(abc)
     s.erase(s.size() - 1);
     reverseString(s);

    }


}
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<endl;
    cout<<"Reversed String : ";
    reverseString(s);
    cout<<endl;
    return 0;
}
