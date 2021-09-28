#include<iostream>
using namespace std;

class complex{
  int a,b;
    //constructers
    public:
complex(void);//constructor declaration

void printNumber()
{
    cout<< "your number is " << a << "+" << b << "i" <<endl;
}

};


complex :: complex(void)
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    a=10;
    b=0;                                                  
}

int main(){
  
  complex c;
  c.printNumber();

return 0;
}