#include<bits/stdc++.h>

using namespace std;
int unique(int a[],int n)
{
	int xorsum=0;
	for(int i=0;i<n;i++)
	{
		xorsum=xorsum^a[i];
	}
	return xorsum;
}

int main()
{  
	int a[5]={1,2,3,2,1};
	cout<<unique(a,5);

 
	return 0;

	
	}