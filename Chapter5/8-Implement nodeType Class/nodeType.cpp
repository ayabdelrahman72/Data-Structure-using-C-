#include "nodeType.h"
#include <stddef.h>
using namespace std;
#include <iostream>
nodeType::nodeType()
{
    next=NULL;
}
 nodeType::nodeType(const int &info,nodeType *link){
    entry=info;
    next=link;
  }

nodeType::~nodeType()
{
    next=NULL;
}
 void nodeType::setEntry(const int&elem){
    entry=elem;

 }
  int nodeType::getEntry() const{

  return entry;
  }
  void nodeType::setNext(nodeType *link){

  next=link;
  }
  nodeType* nodeType::getNext()const{

  return next;
  }
  const nodeType &nodeType::operator=(const nodeType &other){

         next=other.next;

     return *this;


  }
   nodeType::nodeType(const nodeType &other){
         next=other.next;
   }

