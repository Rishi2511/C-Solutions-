#include<iostream>
using namespace std;

class test{
int a,b;

public:
// test(int i,int j):a(i),b(a+j)
// test(int i,int j):a(i),b(i+j)
test(int i,int j):a(i),b(2*j)
{
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
}

};
int main(){
test t(4,6);


return 0;
}