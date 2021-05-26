#include <iostream>

using namespace std;
int power(int base,int pow){
     if(pow==1)
        return base;
     if(pow==0)
        return 1;

  return base*power(base,pow-1);

}
int main()
{
    int base,pow;
    cout<<"Enter the base then the power "<<endl;
    cin>>base>>pow;
    cout<<"Result : ";
   cout<<power(base,pow)<<endl;
    return 0;
}
