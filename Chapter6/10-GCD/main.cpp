#include <iostream>

using namespace std;
//we assume that the user will enter the largest number first and didn't enter 0
int GCD(int x,int y){
     if(x%y==0)
        return y;
     if(y==1)
        return 1;
     return (GCD(x,y-1));


}
int main()
{
    int x,y;
    cout<<"Enter the two numbers that you wanna know the GCD of them in ascending order"<<endl;
    cin>>x>>y;
    cout<<GCD(x,y);
    return 0;
}
