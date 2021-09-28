//code likhna nahi aa rha



#include<bits/stdc++.h>

using namespace std;

int unique(int arr[],int n,int k)
{
	int INT_SIZE=8*sizeof(int);
	count[INT_SIZE];
	for(int i=0;i<INT_SIZE;i++)
	{
		for(int j=0;j<n;j++)

			if(arr[j] & 1<<i !=0)
				count[i]+=1;

	}

	int num=0;
	for(int i=0;i<INT_SIZE;i++)
	{
		num+=(count[i]%k)*(1<<i);
	}
	return num;
}

int main()
{  
	int n=7;
	int arr[n]={1,1,1,2,2,2,4}
    int k=3;
    cout<<unique(arr,n,k)<<endl;
 
	return 0;

	
	}