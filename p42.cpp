#include<iostream>
using namespace std;

class complex{
int real,imaginary;
public:
void setdata(int a,int b)
{
    real=a;
    imaginary=b;
}

void getdata()
{
    cout<<"real part is : "<<real<<endl;
    cout<<"imaginary part is : "<<imaginary<<endl;
}
};
int main(){
    // complex rishi;
    // complex *ptr= &rishi;
    complex *rishi=new complex;
    rishi->setdata(1,2);
    rishi->getdata();
    
return 0;
}