#include <iostream>

using namespace std;
int multiply(int m,int n){
      if(n==1) //base case
        return m;
    else
      if(n==0) // base case ...we will reach to this case only if the user entered n=0 but if the user entered any number greater than 0 the base case will only be n==1
         return 0;
     else
        return(m+multiply(m,n-1)); //general case


}
int main()
{
     cout<<multiply(3,0);
    return 0;
}
