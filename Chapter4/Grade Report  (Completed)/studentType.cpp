#include "studentType.h"
#include "iomanip"
studentType::studentType(string fName,string lName,int id,bool isP,vector<courseType> courses):personType(fName,lName)
{
    ID=id;
    isPaid=isP;
    numberOfCourse=courses.size();
    coursesEnrolled=courses;
}
studentType::studentType(){
    ID=0;
    isPaid=false;
    numberOfCourse=0;
}
int studentType::getNumberOfCourses(){

 return numberOfCourse;
}
bool studentType::getIsPaid(){

 return isPaid;

}
ostream & operator<<(ostream &output , studentType &student){

   output<<"student Name : "<<student.getFirstName()<<" "<<student.getLastName()<<endl;
   output<<"student ID :"<<student.getID()<<endl;
   output<<"Number of courses enrolled :"<<student.getNumberOfCourses()<<endl;
   output<<"**********************************************************"<<endl;
   output<<"course Number"<<setw(25)<<"Course Name"<<setw(19) <<"Credits"<<setw(18)<<"Grade"<<"\n";
     for(int i=0;i<student.getNumberOfCourses();i++){
          student.coursesEnrolled[i].print(student.getIsPaid());
   }

    output<<" \n Total number of credit hours :"<<student.getHoursEnrolled()<<endl;
    if(student.getIsPaid())
    output<<"MidSemester GPA : "<<student.getGPA()<<endl;
    else{
        output<<"*** Grades are being held for not paying the tuition ***"<<endl;
        output<<"Amout Due : "<<student.billingAmount(2000)<<endl;
    }

   return output;

}
int studentType:: getID(){

return ID;
}
float studentType::getGPA(){
    float sum=0.0;
       for(int i=0;i<numberOfCourse;i++){
        switch(coursesEnrolled[i].getGrade()){
     case 'A':
        sum+=coursesEnrolled[i].getCredits()*4;
        break;
     case 'B':
         sum+=coursesEnrolled[i].getCredits()*3;
         break;
     case 'C':
         sum+=coursesEnrolled[i].getCredits()*2;
         break;
    case 'D':
         sum+=coursesEnrolled[i].getCredits()*1;
         break;
     case 'F':
         break;
     default:
        cout<<"Invalid Course Grade"<<endl;



        }


       }
       if(getHoursEnrolled()!=0)
        return sum/getHoursEnrolled();
       else
        return 0;

}
int studentType::getHoursEnrolled(){
   int totalHours=0;
  for(int i=0;i<numberOfCourse;i++)
          totalHours+=coursesEnrolled[i].getCredits();

   return totalHours;

}
 double studentType::billingAmount(double pricePerHour){
     double total=0.0;
   for(int i=0;i<numberOfCourse;i++){
     total+=coursesEnrolled[i].getCredits()*pricePerHour;
   }
   return total;


 }


