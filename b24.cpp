#include<bits/stdc++.h>

using namespace std;

int decimeltobinary(int n)
{
	int x=1;
	int ans=0;
	while(x<=n)
		x*=2;
	    x/=2;  // (bcz. the moment at which x*2>n , x/2 will make it smaller than n)
		
	while(x>0)
	{
		int lastdigit=n/x;//gives the quotient
		n-=x*lastdigit;
		x/=2;
		ans=ans*10+lastdigit;
	}
	return ans;
	

}

int main()
{  
	int n;
	cin>>n;

	cout<<decimeltobinary(n)<<endl;
 
	return 0;

	
	}