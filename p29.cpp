#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num)
    {
        a=num;
    }
    // number(number &obj)
    // {
    //     cout<<"copy contructer is called "<<endl;
    //     a=obj.a;
    // }
   
    void display()
    {
        cout<<"the number for this object is "<<a<<endl;
    }

};

int main(){
    number x,y,z(45);
    z.display();
    x.display();
    y.display();

    number z1(z);
    z1.display();
   
   number z2=z;
   z2.display();
    
return 0;
}