#include<iostream>
#include<climits>


using namespace std;

int main()
{ 

    int s;
	cin>>s;
	int n;
	cin>>n;
	
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0,j=0,st=-1,en=-1,sum=0; //st and en will store the final ans
	while(j<n && sum+a[j]<=s) //first cond. : jab a[i] move hi nahi kiya
	{
		sum+=a[j];
		j++;
	}
	if(sum==s)   // ye pehle wali condition ka hi part hai
	{
		cout<<i+1<<" "<<j<<endl;//isme j ko isliye increment nahi kiya bcz. vo isse pehle wali step me ho chuka hai
		return 0;
	}
	while(j<n)  // second cond. : jab dono move karna padega
	{
		sum+=a[j];
		while(sum>s)
		{
			sum-=a[i];
			i++;
		}
		if(sum==s)
		{		

			st=i+1;
			en=j+1;
			break;}
		j++;
	}
	cout<<st<<" "<<en;


    

        return 0;
    }






















