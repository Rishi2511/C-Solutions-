#include<bits/stdc++.h>

using namespace std;

int numberofone(int n)
{
	int count=0;
	while(n!=0)
	{
		n=n & (n-1);
		count++;
	}
	return count;
}
int main()
{  

	cout<<numberofone(19)<<endl;

 
	return 0;

	
	}