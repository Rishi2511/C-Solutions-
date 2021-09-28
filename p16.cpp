#include<iostream>
using namespace std;

class employee
{
private:  
int a,b,c;

public:
int d,e;

void setdata(int a1,int b1,int c1);//declaration//compiler se bolna ki mai aaage  ye function dunga
void getdata(){    //define kiya getdata function
                
    cout<<"value of a : "<<a<<endl;
    cout<<"value of b : "<<b<<endl;
    cout<<"value of c : "<<c<<endl;
    cout<<"value of d : "<<d<<endl;
    cout<<"value of e : "<<e<<endl;
}

};

void employee :: setdata(int a1,int b1,int c1){       // :: --> scope resolution operator
    a=a1;
    b=b1;
    c=c1;
}



int main(){

    employee rishi;
    // rishi.a=3;" -->this will throw error as it  is private,therefore we cannot access it directly "
    rishi.d=3;
    rishi.e=9;
    rishi.setdata(1,2,4);
    rishi.getdata();
return 0;
}