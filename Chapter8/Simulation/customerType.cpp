#include "customerType.h"
customerType::customerType(int cn,int arrvTime,int wTime,int tranTime)
{
    setCustomerInfo(cn,arrvTime,wTime,tranTime);

}
void customerType::setCustomerInfo(int cn,int arrvTime,int wTime,int tranTime){
customerNumber=cn;
        arrivalTime=arrvTime;
        waitingTime=wTime;
        transactionTime=tranTime;

}


  int customerType::getWaitingTime() const{

  return waitingTime;
  }
     void customerType::setWaitingTime(int time){

     waitingTime=time;
     }
       void customerType::incrementWaitingTime(){

       waitingTime+=1;
       }

   int customerType::getArrivalTime() const{

   return arrivalTime;

   }
    int customerType::getTransactionTime() const{


        return transactionTime;
        }
    int customerType::getCustomerNumber() const{

        return customerNumber;

        }
