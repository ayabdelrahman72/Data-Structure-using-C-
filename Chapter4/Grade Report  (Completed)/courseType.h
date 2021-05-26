#ifndef COURSETYPE_H
#define COURSETYPE_H
#include <string>
using namespace std;
#include <iostream>

class courseType
{
   friend istream & operator>>(istream &,courseType &);
    public:
        courseType(string=" ",string=" ",int=0,char='*');
        void setCourseInfo(string,string,int,char);
        int getCredits();
        string getCourseName();
        string getCourseNumber();
        char getGrade();
        void print(bool);
        void setCourseName(string);
        void setCourseNumber(string);
        void setGrade(char);
        void setCreditHours(int);

    protected:

    private:
        string courseName;
        string courseNumber;
        int creditHours;
        char courseGrade;
};

#endif // COURSETYPE_H
