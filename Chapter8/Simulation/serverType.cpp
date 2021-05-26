#include "serverType.h"

serverType::serverType()
{
        status="free";
        transactionTime=0;
}
  bool serverType::isFree() const{


  return (status=="free");
  }
   void serverType::setFree(){
    status="free";
   }
    void serverType::setBusy(){

    status="busy";
    }
    void serverType::setTransactionTime(int time){

    transactionTime=time;
    }
      void serverType::setTransactionTime(){
       transactionTime=currentCustomer.getTransactionTime();
      }
    void serverType::decreaseTransactionTime(){

         transactionTime-=1;

         }
    void serverType::setCurrentCustomer(customerType currCustomer){
        //or if we overloaded the assignment operator we can here directly write currentCustomer=currCustomet
    currentCustomer.setCustomerInfo(currCustomer.getCustomerNumber(),currCustomer.getArrivalTime()
                                                                ,currCustomer.getWaitingTime(),currCustomer.getTransactionTime());


    }
   int serverType::getCurrentCustomerNumber() const{
   return currentCustomer.getCustomerNumber();

   }
    int serverType::getCurrentCustomerArrivalTime() const{

        return currentCustomer.getArrivalTime();
        }
    int serverType::getCurrentCustomerWaitingTime() const{

    return currentCustomer.getWaitingTime();
    }
    int serverType::getCurrentCustomerTransactionTime() const{
     return currentCustomer.getTransactionTime();
    }


      ///  int getRemainingTransactionTime() const;


