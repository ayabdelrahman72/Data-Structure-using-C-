#include <iostream>
using namespace std;
void MoveDisks(int counter,int start,int finish,int temp){
   if(counter>0){
       MoveDisks(counter-1,start,temp,finish);
       cout<<"Move Disk  "<<counter<<"  from  "<<start<<"  to  "<<finish<<endl;
       MoveDisks(counter-1,temp,finish,start);

   }

}
using namespace std;

int main()
{
    MoveDisks(3,1,3,2);
    return 0;
}
