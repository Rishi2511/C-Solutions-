#include<iostream>
using namespace std;

class student{
    int id;
   static int count;
    public:
    void setdata(void){
        cout<<" enter Id of student "<<endl;
        cin>>id;
        count++;
    }

    void getdata(void){
        cout<<"Id of student is "<<id<<" and this is student number "<<count<<endl;
    }

    static void getCount(void){
        cout<<"the value of count id "<<count<<endl;
    }
};

 int student ::  count=1000; //default value is 0;


int main(){

student rishi,agam,shrajan;
// rishi.id=1;  //cant do bcz private members
rishi.setdata();
rishi.getdata();
student ::getCount();

agam.setdata();
agam.getdata();
student ::getCount();

shrajan.setdata();
shrajan.getdata();
student ::getCount();

 return 0;
}