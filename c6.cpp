//code likhna nahi aa rha




#include<bits/stdc++.h>

using namespace std;

void unique(int arr[],int n,int *x,int *y)
{
	int xorsum=0;
	for(int i=0;i<n;i++)
	{
		
		xorsum^=arr[i];
	}	

	int rmbs=xorsum & -xorsum;
	
for(int i=0;i<n;i++)
{
	if(arr[i] & rmbs ==0)
	{
		*x^=arr[i];
	}
	else
	{
		*y^=arr[i];
	}
}

	
}
int main()
{  
	int n=8;
	int arr[n]={1,9,2,2,16,5,9,1};

	int *x=0;
	int *y=0;
	unique(arr,n,x,y);
	cout<<x<<" "<<y;

 
	return 0;

	
	}