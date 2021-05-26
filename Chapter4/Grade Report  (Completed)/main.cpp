#include <iostream>
#include "studentType.h"
#include "courseType.h"
using namespace std;
/*
 To not get CONFUSED here i made some DIFERENCES from the project in the book
 First :
    I make the input and ouput from iostream not from or to files like in the book
 second:
     i made input and output operator overloading to make me able to insert the data of course directly and output the data of each student also directly using cin and cout
 Third :
     you may see difference in the name of the methods and variables but they have same functionality
*/
int main()
{
    int numberOfCourses;
     int i=1;
    courseType course;
    vector<courseType> courses;
    cout<<"Enter the number of courses"<<endl;
    cin>>numberOfCourses;
    cout<<"Please enter WITHOUT any SPACE courseName then courseNumber then courseGrade the courseCreditHours"<<endl;
    while(numberOfCourses--){
      // i is for usability to make the user know he/she is going to enter the data of course number what ?
            cout<<"Enter CourseNumber "<<i<<" : ";
         cin>>course;
         courses.push_back(course);
         i+=1;
    }
    studentType student("aya","abdelrahman",20,true,courses);
    cout<<student;
    return 0;
}
