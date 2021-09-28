#include<iostream>
using namespace std;


class simple{
    int data1;
    int data2;
    int data3;

    public:
    simple(int a,int b=9,int c=8)     
    {
        data1=a;
        data2=b;
        data3=c;

    }
    void printdata();
 
};

void simple:: printdata(){
    cout<<"the value of data is "<<data1<<"+"<<data2<<"+"<<data3;
}

int main(){
    simple s(1,2,3);
    s.printdata();
    return 0;


return 0;
}