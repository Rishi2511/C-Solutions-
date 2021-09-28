#include<iostream>
using namespace std;

class baseclass{
public:
int var_base=1;
virtual void display()
{
    cout<<"display base class var_base "<<var_base<<endl;
}
};
\
class derivedclass:public baseclass {
public:
int var_derived=2;
void display()
{
    cout<<"display base class var_base "<<var_base<<endl;
    cout<<"display derived class var_derived "<<var_derived<<endl;
}
};

int main(){
    baseclass *baseclass_pointer;
    derivedclass derivedclass_obj;
    baseclass baseclass_obj;

    baseclass_pointer=&derivedclass_obj;
    baseclass_pointer->display();

return 0;
}