#include<iostream>
using namespace std;

int count=0;
class num{
    public:
    num()
    {
        count++;
        cout<<"this is the time when the constructor is called "<<count<<endl;
    }
    ~num()
    {
        cout<<"when destructor is called "<<count<<endl;
        count--;
    }
     

};
int main(){
    cout<<"we are in main function " <<endl;
    cout<<"creating 1st object n1 " <<endl;
    num n1;
    {
        cout<<"<entering this block"<<endl;
        cout<<"creating more objects "<<endl;
        num n2,n3;
        cout<<"exiting this block "<<endl;

    }
cout<<"back to main" <<endl;
    
return 0;
}