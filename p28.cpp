#include<iostream>
using namespace std;

class bankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
bankDeposit(){}
bankDeposit(int p,int y,float r) ; //r can be decimel no.
bankDeposit(int p,int y,int r) ; // r will be integer;
void show();
};

bankDeposit:: bankDeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;

    for(int i=0;i<y;i++)
    {
         returnValue=returnValue*(1+ interestRate);
    }

}
bankDeposit:: bankDeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
;
    for(int i=0;i<y;i++)
    {
        returnValue=returnValue*(1+ interestRate);
    }

}

void bankDeposit :: show()
{
    cout<<"the principal of "<<principal<<" with a interest rate of "<<interestRate<<" within the time of "<<years<<" years got upto "<<returnValue<<endl;
}

int main(){
bankDeposit b1,b2,b3;

int p,y,r;
float R;
cin>>p>>y>>r;
 b1 = bankDeposit(p,y,r);
b1.show();

cin>>p>>y>>R;
 b2 = bankDeposit(p,y,R);
b2.show();

return 0;
}