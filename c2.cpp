#include<bits/stdc++.h>

using namespace std;
bool ispowerof2(int n)
{
	return(n && !(n & n-1));//(!(n & n-1)=this means if n&n-1 is =0 then ! this will make it true)
}


int main()
{  
	cout<<ispowerof2(16)<<endl;

 
	return 0;

	
	}
