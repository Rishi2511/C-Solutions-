#include<bits/stdc++.h>
using namespace std;

class simple_calculator{
    protected:
    int a,b;
    public:
    
    void perform1(float m1,float m2)
    {
     a=m1;
     b=m2;
    }
    void show1(){
        cout<<"the value of the operation + done is "<<a+b<<endl;
        cout<<"the value of the operation - done is "<<a-b<<endl;
        cout<<"the value of the operation * done is "<<a*b<<endl;
        cout<<"the value of the operation / done is "<<a/b<<endl;
    }
    

};
class scientific_calculator{
    protected:
    int a,b;
    
    public:
    
    void perform2(float m1,float m2)
    {
     a=m1;
     b=m2;
    }
    void show2(){
        cout<<"the value of the operation power done is "<<pow(a,b)<<endl;
        cout<<"the value of the operation sqrt done is "<<sqrt(a)<<endl;
        cout<<"the value of the operation sqrt done is "<<sqrt(b)<<endl;
        cout<<"the value of the operation  done is "<<sin(a)<<endl;
        cout<<"the value of the operation  done is "<<cos(b)<<endl;
    }
    

};

class hybrid_calculator : public simple_calculator , public scientific_calculator{
public:
void display()
{ 
    
     show1() ;
     show2() ;
}
};

int main(){
    hybrid_calculator casio;
    casio.perform1(3,2);
    casio.perform2(5,4);
    casio.display();

    
return 0;
}