#include<iostream>
using namespace std;

int main(){
       
       int n;
       cin>>n;
      
      int answer=0;
      int remainder,i=1;

      while(n>0)
      {
         remainder=n%2; //((chota number)%(bada number)=chota number)
         n/=2;
         answer=answer+i*remainder;
         i=i*10;
      }
      cout<<answer;

      
           
   
return 0;
}