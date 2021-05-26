#include "serverListType.h"

serverListType::serverListType(int num)
{
    if(num<1){
            num=0;
    }
    numOfServers=num;
    servers=new serverType[num];

}
  serverListType::~serverListType(){
      delete [] servers;

  }
  int serverListType::getFreeServerID() const{
      int serverID=-1;
      for(int i=0;i<numOfServers;i++){
          if(servers[i].isFree()){
            serverID=i;
            break;
          }
          return serverID;
      }


      }
 int serverListType::getNumberOfBusyServers() const{
     int counter=0;
     for(int i=0;i<numOfServers;i++){
          if(!servers[i].isFree())
            counter+=1;
     }
    return counter;
 }
   void serverListType::setServerBusy(int serverID,customerType currCustomer,int tTime){

   servers[serverID].setBusy();
   servers[serverID].setTransactionTime(tTime);
   servers[serverID].setCurrentCustomer(currCustomer);

   }
    void serverListType::setServerBusy(int serverID,customerType currCustomer){
    int tTime=currCustomer.getTransactionTime();
     servers[serverID].setBusy();
   servers[serverID].setTransactionTime(tTime);
   servers[serverID].setCurrentCustomer(currCustomer);

    }
