//polymorphism  
#include<iostream>
using namespace std;

class baseclass{
public:
int var_base;
void display()
{
    cout<<"display base class var_base "<<var_base<<endl;
}
};

class derivedclass:public baseclass {
public:
int var_derived;
void display()
{
    cout<<"display base class var_base "<<var_base<<endl;
    cout<<"display derived class var_derived "<<var_derived<<endl;
}
};


int main(){
baseclass *baseclass_pointer;
baseclass baseclass_obj;
derivedclass derivedclass_obj;
baseclass_pointer=&derivedclass_obj;

baseclass_pointer->var_base=40;
baseclass_pointer->display();

baseclass_pointer->var_base=340;
baseclass_pointer->display();

derivedclass *derivedclass_pointer;
derivedclass_pointer=&derivedclass_obj;
derivedclass_pointer->var_derived=90;
derivedclass_pointer->display();

return 0;
}