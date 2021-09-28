#include<iostream>
using namespace std;

int sum(int a,int b) 
   {cout<<" 2 parameters "<<endl;
       return a+b;
   }
   int sum(int a,int b,int c)
   {cout<<" 3 parameters "<<endl;
       return a+b+c;
   }

int main(){
cout<<"sum with 2 parameters "<<sum(2,3)<<endl;
cout<<"sum with 3 parameters "<<sum(2,3,4);

   

return 0;
}