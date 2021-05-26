#include "courseType.h"
#include <iomanip>
#include <iostream>
using namespace std;
courseType::courseType(string name,string number,int hours,char grade)
{
    setCourseInfo(name,number,hours,grade);
}
void courseType::setCourseInfo(string name,string number,int hours,char grade){
    //In real world projects we must first validate the parameters before assigned it to the data members
   courseName=name;
   courseNumber=number;
   creditHours=hours;
   courseGrade=grade;


}
int courseType::getCredits(){

return creditHours;
}
string courseType::getCourseName(){

return courseName;
}
string courseType::getCourseNumber(){

return courseNumber;
}
char courseType::getGrade(){

return courseGrade;
}
 void courseType::print(bool isPaid){
      cout<<courseName<<setw(18)<<courseNumber<<setw(18)<<creditHours<<setw(18);
      if(isPaid)
        cout<<courseGrade<<endl;
      else
        cout<<"***"<<endl;

 }
  void courseType::setCourseName(string name){
      courseName=name;

  }
void courseType::setCourseNumber(string number){
courseNumber=number;

}
void courseType::setGrade(char grade){
  courseGrade=grade;

}
void courseType::setCreditHours(int hours){
   creditHours=hours;

}

 istream & operator>>(istream &input ,courseType &course){
       input >> course.courseName;
       input >> course.courseNumber;
       input >> course.courseGrade;
       input >> course.creditHours;

       return input;

 }

