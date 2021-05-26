#include <iostream>

using namespace std;
int sum(int arr[],int s){
    if(s==0)
        return 0;
    else{
       return(arr[s-1]+sum(arr,s-1));
    }


}
int main()
{  int s;
    cout<<"Enter the size of the array "<<endl;
   cin>>s;
   int arr[s];
   int temp=s;
   cout<<"Enter the values of the array"<<endl;
   while(temp--){
    cin>>arr[temp];
   }
   cout<<sum(arr,s);
    return 0;
}
