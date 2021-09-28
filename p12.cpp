#include<iostream>
using namespace std;



int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void swapPointer(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

// void swapPointerVar(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// } 
int & swapPointerVar(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
} 


int main(){
    int x=4,y=5;
    cout<<"a "<<x<<endl;
    cout<<"b "<<y<<endl;
    // swap(a,b); // thi will not swap a and b.
    // swapPointer(&a,&b);  
    swapPointerVar(x,y)=45;  
    
     cout<<"a "<<x<<endl;
    cout<<"b "<<y<<endl;
   // cout<<"the sum is : "<<sum(a,b);
return 0;
}