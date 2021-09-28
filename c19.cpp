#include<bits/stdc++.h>

using namespace std;
void inc(int n)
{
	if(n==1)
	{
		cout<<"1"<<endl;
		return;
	}
	inc(n-1);
	cout<<n<<endl;
}

int main()
{  
	
	int n=5;
	inc(n);

 
	return 0;

	
	}




	