#include<bits/stdc++.h>

using namespace std;
void dec(int n)
{
	if(n==1)
	{
		cout<<"1"<<endl;
		return;
	}                                                                                      
	cout<<n<<endl;
	dec(n-1);
}
int main()
{   
	int n=5;
	dec(n);

	return 0;
	}
	
	

 

	




	