#include<bits/stdc++.h>

using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(arr[i]==key)
	{
		return i;
	}

	return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	int restarr=lastocc(arr,n,i+1,key);
	if(restarr!=-1)
	{
		return restarr;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return -1;
}

int main()
{  
	
	int arr[5]={1,2,6,4,6};
	
	cout<<firstocc(arr,5,0,6)<<endl;
	cout<<lastocc(arr,5,0,6);
 
	return 0;

	
	}