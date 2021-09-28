#include<iostream>
using namespace std;

int main(){
//    int a=4;
//    int* ptr=&a;
//    cout<<*ptr;


// int *p=new int(4);
// cout<<"value at address p is "<<*(p)<<endl;
// cout<<"value of address p is "<<(p)<<endl;


// int* arr=new int[3]; 

// arr[0]=10;
// *(arr+1)=20;
// arr[2]=30;
// // delete[] arr;
// cout<<"arr[0] : "<<arr[0]<<endl;
// cout<<"arr[1] : "<<arr[1]<<endl;
// cout<<"arr[2] : "<<arr[2]<<endl;

int marks[]={1,2,3,4,5};

int* p=marks;
cout<<*p<<endl;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
// cout<<*(p+1)<<endl;
// cout<<*(p+2)<<endl;



return 0;
}
