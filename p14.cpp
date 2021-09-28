#include<iostream>
using namespace std;



// int factorial(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main(){
//     int a;
//     cout<<"enter a : "<<endl;
//     cin>>a;
//     cout<<"factorial of a: "<<factorial(a);
//    //factorial of a number
//    //n!=n*(n1)! 

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main()
{
  int a;
  cout<<" enter a: ";
  cin>>a;
  cout<<"fibonacci value of nth term "<<fib(a);
  

return 0;
}