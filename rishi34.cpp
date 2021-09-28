#include<iostream>

using namespace std;

void swap(int A,int B)
{
	int temp=A;
	A=B;
	B=temp;
	  cout<<"a= :"<<A<<"b = :"<<B<<endl;
    



}
int main()
{
	int x=10,y=9;
    swap(x,y);
    cout<<"X= :"<<x<<"Y = :"<<y<<endl;
    return 0;

}