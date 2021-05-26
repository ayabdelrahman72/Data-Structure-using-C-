#include "PersonalInfo.h"


void PersonalInfo::setFirstName(string fName){
     firstname=fName;
 }
  void PersonalInfo::setLastName(string lName){
  lastname=lName;


  }
  void PersonalInfo::setMI(char m){
  mi=m;
  setFullName();
  }
void PersonalInfo::setUserName(string uName){
username=uName;

}
void PersonalInfo::setPassword(string pass){
  password=pass;


}
void PersonalInfo::setFullName(){

 fullName=firstname+" "+mi+". "+lastname;
}
string PersonalInfo::getFirstName(){

return firstname;
}
string PersonalInfo::getLastName(){

return lastname;
}
char   PersonalInfo::getMI(){

return mi;

}
string PersonalInfo::getUserName(){

return username;
}
string PersonalInfo::getPassword(){

return password;
}
string PersonalInfo::getFullName(){

return fullName;
}
