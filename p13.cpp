#include<iostream>
using namespace std;

inline int product(int a ,int b)
{
          
    return a*b;
}
//  int product(int a ,int b)
// {
//     static int c=0;
//     c=c+1;
//     return a*b+c ;
// }

float moneyRecieve(int currentMoney,float factor=1.04)
{
return currentMoney*factor;
}
int main(){

int money=10000;
cout<< "if you have " << money << "in your account then you will recieve " << moneyRecieve(money);
cout<< "if you have " << money << "in your account then you will recieve " << moneyRecieve(money,1.1);
    // int a,b;
    // cin>>a>>b;
    // cout<<product(a,b)<<endl;
    // cout<<product(a,b)<<endl;
    // cout<<product(a,b)<<endl;
   
return 0;
}