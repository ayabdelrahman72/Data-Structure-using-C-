#include <iostream>
#include <string>
using namespace std;
#include "PersonalInfo.h"
int main()
{
PersonalInfo persons[3];
string fname,lname,username,password;
char mi;

cout<<"Data Entry for the 3 users with user name and password\n"<<endl;
for(int i=0;i<2;i++)
{
    cout<<"\nPERSONAL INFO"<<endl;
    cout<<"Enter first name: ";
    cin>>fname;
    persons[i].setFirstName(fname);
    cout<<"Enter last name: ";
    cin>>lname;
    persons[i].setLastName(lname);
    cout<<"Enter middle initial: ";
    cin>>mi;
    persons[i].setMI(mi);
   cout<<endl;
    cout<<"LOGIN INFO"<<endl;
    cout<<"Enter Username: ";
    cin>>username;
    persons[i].setUserName(username);
    //Repeat data entry for username if username already used(do this for the 2nd and 3rd user
    cout<<"Enter Password: ";
    cin>>password;
    persons[i].setPassword(password);
}
    system("cls");
     cout << "Fullname\t\t UserName\t \tPassword" << endl;
    for (int i=0; i<2;i++)
	{

    cout <<persons[i].getFullName()<< "\t \t " << persons[i].getUserName()<< "\t \t" << persons[i].getPassword()<< endl<<endl;;

}
return 0;
}


