#ifndef PERSONALINFO_H
#define PERSONALINFO_H
#include <string>
using namespace std;

class PersonalInfo
{
    public:
       void setFirstName(string fName);
       void setLastName(string lName);
       void setMI(char m);
       void setUserName(string uName);
       void setPassword(string pass);
       string getFirstName();
       string getLastName();
       char    getMI();
       string getUserName();
       string getPassword();
       string getFullName();


    protected:

    private:
        string username;
        string firstname;
        string lastname;
        string fullName;
        char mi;
        string password;
        void setFullName();

};

#endif // PERSONALINFO_H
