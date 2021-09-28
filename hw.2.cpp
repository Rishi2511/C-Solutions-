#include<iostream>

using namespace std;

int main()
{
	//int n=5;

	for(int i=1;i<=5;i++)
	{
	   for (int j=1;j<=5-i;j++)
	   {
	   	cout<<" ";
	   }
	   for(int j=1;j<=i;j++)
	   {
	   	cout<<j;
	   }
	   cout<<endl;
	}
	for(int i=4;i>=1;i--)
	{
	   for (int j=1;j<=5-i;j++)
	   {
	   	cout<<" ";
	   }
	   for(int j=1;j<=i;j++)
	   {
	   	cout<<j;
	   }
	   cout<<endl;
	}


	return 0;
}