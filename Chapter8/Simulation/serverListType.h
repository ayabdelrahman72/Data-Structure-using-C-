#ifndef SERVERLISTTYPE_H
#define SERVERLISTTYPE_H
#include "serverType.h"

class serverListType
{
    public:
        serverListType(int num=1);//a list of serves specified by num is created and each server is initialized to "free"
        ~serverListType();
        int getFreeServerID() const;
        int getNumberOfBusyServers() const;
        void setServerBusy(int serverID,customerType currCustomer,int tTime);
        void setServerBusy(int serverID,customerType currCustomer);


    protected:

    private:
        int numOfServers;
        serverType *servers; //dynamic array
};

#endif // SERVERLISTTYPE_H
