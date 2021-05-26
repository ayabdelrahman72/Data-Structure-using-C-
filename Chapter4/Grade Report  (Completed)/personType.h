#ifndef PERSONTYPE_H
#define PERSONTYPE_H
using namespace std;
#include <string>

class personType
{
    public:
        personType(string=" ",string= " ");

       void setFirstName(string);
       void setLastName(string);
      string getLastName();
      string getFirstName();
      void print();

    protected:

    private:
        string firstName;
        string lastName;
};

#endif // PERSONTYPE_H
