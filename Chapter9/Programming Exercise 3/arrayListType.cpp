#include "arrayListType.h"
#include <iostream>
using namespace std;

arrayListType::arrayListType(const arrayListType&otherList)
{
    maxSize=otherList.maxSize;
    length=otherList.length;
    List=new int[maxSize];
    for(int i=0;i<length;i++)
        List[i]=otherList.List[i];

}

arrayListType::arrayListType(int size)
{
if (size < 0)
{
cerr<< "The array size must be positive. Creating "
<< "an array of size 100. " << endl;
maxSize = 100;
}
else
maxSize = size;
length = 0;
List = new int[maxSize];
for(int i=0;i<maxSize;i++)
    List[i]=0;



}
void arrayListType::removeAt(int position){
       if(position >=length || position<0)
           cout<<"this position is out of range"<<endl;
       else{
        for(int i =position;i<length-1;i++)
            List[i]=List[i+1];

         length-=1;
       }


}
void arrayListType::printArray(){
    for(int i=0;i<length;i++){
        cout<<List[i]<<" \t ";
        if(i%4==0)
            cout<<endl;

    }

}
void arrayListType::InsertEnd(int element){
   if(length>=maxSize)
    cout<<"can\'t insert in a full list"<<endl;
   else{
    List[length]=element;
    length+=1;
   }

}
void arrayListType::removeAtAnotherTech(int position){
      if(position <0 || position >= length)
        cout<<"this position is out of range"<<endl;
      else if(position ==length-1){
               List[position]=0;
               length-=1;

      }else{
             List[position]=List[length-1];
             length-=1;

      }

}
void arrayListType::removeAll(int position) {
    if(position <0 || position >= length)
        cout<<"this position is out of range"<<endl;
    else{
            int temp=List[position];
       for(int i=0;i<length-1;i++){
        if(List[i]==temp)
            removeAt(i);
       }

    }


}
 int arrayListType::minimum() const{
     int temp=List[0];
     for(int i=1;i<length;i++){
        if(List[i]<temp)
            temp=List[i];
     }
     return temp;


 }
 int arrayListType::maximum() const{
     int temp=List[0];
     for(int i=1;i<length;i++){
        if(List[i]>temp)
            temp=List[i];
     }
     return temp;


 }
 int arrayListType::seqSearch(const int &item,int startPos)const{
     if(startPos ==length)
         return -1;
     if(List[startPos]==item)
        return startPos;
     else
        return seqSearch(item,startPos+1);


 }
  int arrayListType::recBinarySearch(const int &item,int first,int last){
      if(first<=last){
      if(List[(first+last)/2]==item)
        return ((first+last)/2);
      else
         if(List[(first+last)/2]>item)
           return recBinarySearch(item,first,((first+last)/2)-1);
         else
            return recBinarySearch(item,((first+last)/2)+1,last);
      }else
           return -1;



  }
  ///NEW
int arrayListType::recSeqOrdSearch(const int &item,int startPos)const{
    if(startPos ==length+1)
         return -1;
         else
      if(List[startPos]>item)
        return -2;
        else
     if(List[startPos]==item)
        return startPos;
     else
        return seqSearch(item,startPos+1);



}

arrayListType::~arrayListType()
{

}
