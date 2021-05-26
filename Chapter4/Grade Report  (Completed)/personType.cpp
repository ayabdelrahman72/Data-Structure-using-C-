#include "personType.h"
#include <iostream>
personType::personType(string F,string L)
{
    setFirstName(F);
    setLastName(L);
}

void personType::setFirstName(string F){
   firstName=F;


}
void personType::setLastName(string L){
lastName=L;

}
string personType::getLastName(){

return lastName;
}
string personType::getFirstName(){
return firstName;
}
void personType::print(){
  cout<<getFirstName() <<" "<<getLastName()<<endl;


}
