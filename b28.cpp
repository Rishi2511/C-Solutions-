#include<bits/stdc++.h>

using namespace std;

int clearbit(int n,int pos)
{
	int mask=~(1<<pos);
	//masking is just a terminology i.e. we are deciding at which position which bit should come.
	return (n & mask);
}

int main()
{  
	cout<<clearbit(5,2)<<endl;

 
	return 0;

	
	}