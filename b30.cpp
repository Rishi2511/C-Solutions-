#include<bits/stdc++.h>

using namespace std;

int getbit(int n,int pos)
{
	return ((n & (1<<pos))!=0);//& karene par reguired pos. ka bit mil jaega.
}

int main()
{  
	cout<<getbit(5,2)<<endl;

 
	return 0;

	}
	