#ifndef CUSTOMERTYPE_H
#define CUSTOMERTYPE_H


class customerType
{
    public:
        customerType(int cn=0,int arrvTime=0,int wTime=0,int tranTime=0);
        void setCustomerInfo(int cn,int arrvTime=0,int wTime=0,int tranTime=0);
        int getWaitingTime() const;
        void setWaitingTime(int time);
        void incrementWaitingTime();
        int getArrivalTime() const;
        int getTransactionTime() const;
        int getCustomerNumber() const;


    protected:

    private:
        int customerNumber;
        int arrivalTime;
        int waitingTime;
        int transactionTime;
};

#endif // CUSTOMERTYPE_H
