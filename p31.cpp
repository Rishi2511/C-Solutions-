#include<iostream>
using namespace std;

//base class
class employee{
   

    public:
          int id;
         
     float salary;
    employee(int inpId){
    id=inpId;
    salary=34;
    }

    employee(){}

};

//derived class syntax
// class {{derived-class-name}} : {{ visibility-mode}} {{ base-class-name}}
// {
//   class members/methods/etc..
// }

class programmer : public employee{

    public:
    programmer(int inpId)
    {
      id=inpId;
    }
    int languageCode=9;
    void getdata()
    {
        cout<<id<<endl;
    }
};

int main(){
   employee harry(1),rishi(2);
   cout<<harry.salary<<endl;
   cout<<rishi.salary<<endl;
   programmer skillf(10);
   cout<<skillf.languageCode<<endl;
   cout<<skillf.id<<endl;
   skillf.getdata();
    
return 0;
}