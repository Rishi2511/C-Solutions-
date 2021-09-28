#include<iostream>
#include<string>
using namespace std;

class binary{
string s;

public:
void read(void);
void chk_bin(void);
void display(void);
void ones_complement(void);
};

void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            cout<<'1';
        }
        else
        {
            cout<<'0';
        }
       
    }
  
 cout<<endl;
}
void binary :: display(void){
    cout<<"displaying your binary number"<<endl;
 for(int i=0;i<s.length();i++)
 {
     cout<<s.at(i);
 }
}

int main(){

//    nesting of member functions  
binary rishi;
rishi.read();
rishi.chk_bin();
rishi.ones_complement();
rishi.display();


return 0;
}