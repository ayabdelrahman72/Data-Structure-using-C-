#ifndef SERVERTYPE_H
#define SERVERTYPE_H
#include <string>
#include "customerType.h"
using namespace std;

class serverType
{
    public:
        serverType();
        bool isFree() const;
        void setFree();
        void setBusy();
        void setTransactionTime(int time); //set the transaction time according to parameter time
        void setTransactionTime();//set transaction time according to the transaction time of the current customer
        int getRemainingTransactionTime() const;
        void decreaseTransactionTime();
        void setCurrentCustomer(customerType currCustomer); //postCondition: currentCustomer=currCustomer
        int getCurrentCustomerNumber() const;
        int getCurrentCustomerArrivalTime() const;
        int getCurrentCustomerWaitingTime() const;
        int getCurrentCustomerTransactionTime() const;

    protected:

    private:
        customerType currentCustomer;
        string status;
        int transactionTime;
};

#endif // SERVERTYPE_H
