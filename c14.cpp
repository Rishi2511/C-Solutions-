#include<iostream>
#include<cmath>

using namespace std;
int power(int n,int p)
{
  if(p==0)
  {
  	return 1;
  }
  int prepower=pow(n,p-1);
  return n*prepower;
}
int main()
{ 
	int n,p;
	cin>>n>>p;

	cout<<power(n,p);
  
	return 0;

	}
	

	
	

 





