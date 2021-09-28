#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:
    void setid(void)
  {
      cout<<"enter id" <<endl;
      cin>>id;
  }

  void getid(void)
  {
      salary=122;
      cout<<"the id is: "<<id<<endl;
  }
};
int main(){
    // employee rishi ,agam,rohan,shruti;
    // rishi.setid();
    // rishi.getid();
    
    employee fb[4];
    for(int i=0;i<4;i++)
    {
         fb[i].setid();
         fb[i].getid();
    }
    
return 0;
}