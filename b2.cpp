#include<iostream>
#include<climits>


using namespace std;

int main()
{  
	int a[]={10,20,30};
	cout<<*a<<endl;
	int *ptr=a;

	for(int i=0;i<3;i++)
	{
		cout<<*(a+i)<<endl;
		//cout<<*ptr<<endl;
		//ptr++;
	}

	