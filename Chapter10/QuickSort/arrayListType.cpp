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
  void arrayListType::requickSort(int f,int l){
     int pivotLocation;
       if(f<l){
        pivotLocation=Partition(f,l);
        requickSort(f,pivotLocation-1);
        requickSort(pivotLocation+1,l);

       }

 }


int arrayListType::Partition(int f,int l){
        int smallIndex,pivot,index;
        int x =(f+l)/2;
        Swap(f , x);
        pivot=List[f];
        smallIndex=f;
        for(index=f+1;index<=l;index++){
            if(List[index]<pivot){
                smallIndex++;
                Swap(smallIndex,index);

            }

        }
          Swap(f,smallIndex);
            return smallIndex;


        }
         void arrayListType::Swap(int x,int y){
     int temp;
     temp=List[x];
     List[x]=List[y];
     List[y]=temp;

  }
/// f for first and l for last

  void arrayListType::quickSort(){
     requickSort(0,length-1);

  }

