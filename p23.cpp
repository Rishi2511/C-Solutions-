#include<iostream>
using namespace std;

class complex{
  int a,b;
    //constructers
    public:
complex(int ,int);//constructor declaration

void printNumber()
{
    cout<< "your number is " << a << "+" << b << "i" <<endl;
}

};


complex::complex(int x,int y)
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    a=x;
    b=y;                                                  
}

int main(){
  
  complex a(4,6);
 

  complex b=complex(5,7);
  a.printNumber();
  b.printNumber();


   
return 0;
}