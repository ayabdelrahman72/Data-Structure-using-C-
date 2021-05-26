#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H
using namespace std;
#include <iostream>
#include <vector>

#include "personType.h"
#include "courseType.h"
class studentType :public personType
{
    friend ostream &operator<<(ostream &, studentType &);
    public:
        studentType(string fName,string lName,int id,bool isP,vector<courseType> courses);
        studentType();
        int getNumberOfCourses();
        bool getIsPaid();
        int getID();
        float getGPA();
        int getHoursEnrolled();
        double billingAmount(double);


    protected:

    private:
        int ID;
        bool isPaid;
        int numberOfCourse;
        vector<courseType> coursesEnrolled;
};

#endif // STUDENTTYPE_H
