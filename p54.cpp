#include<iostream>
using namespace std;

template<typename T1=int,typename T2=float>
class rishi{
    
public:
T1 a;
T2 b;
rishi(T1 x ,T2 y)
{
    a=x;
    b=y;
}
void display()
{
    cout<<"the value of a "<<a<<endl;
    cout<<"the value of b "<<b<<endl;
}

};
int main(){

rishi<> h(3,4.5);
h.display();
cout<<endl;

rishi<int,int> g(6.7,4.5);
g.display();

return 0;
}
                    
