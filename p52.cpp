#include<iostream>

using namespace std;

template <typename T,typename U>
void swap(T &a,U &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
 int x=5;
 float y=3.4;

 swap(x,y);
 cout<<x<<endl<<y;

 return 0;

}
    