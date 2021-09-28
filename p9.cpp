#include<iostream>
using namespace std;

int main(){

//   pointers and array 

int marks[4]={5,7,2,4};
int* p=marks;
// cout<<"the value of *p : "<<*p<<endl;
// cout<<"the value of *(p+1) : "<<*(p+1)<<endl;
// cout<<"the value of *(p+2) : "<<*(p+2)<<endl;
// cout<<"the value of *(p+3) : "<<*(p+3)<<endl;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
return 0;
}