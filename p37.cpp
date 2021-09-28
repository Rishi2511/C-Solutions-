#include<iostream>
using namespace std;

class base1{
public:
void great(){
    cout<<"how are you"<<endl;
}

};
class base2{
public:
void great()
{
    cout<<"kaise ho"<<endl;
}

};

class derived : public base1,public base2
{
    public:
 void great(){
     base1::great();
 }

};
int main(){
 base1 base1obj;   
 base2 base2obj;
 base1obj.great();
 base2obj.great();
 derived a;
 a.great();

return 0;
}