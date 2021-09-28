#include<iostream>

using namespace std;

int pow(int no,int po=2)
{
	int ans=1;
	for(int i=0;i<po;i++)
	
	{
      
      ans=ans*no;
	}
	return ans;
}
int main()
{
	int n,p;
	cout<<"enter no.=";
	cin>>n;
	
	cout<<"enter power =";
	cin>>p;
	cout<<"answer="<<pow(n);
return 0;
}



{hint upar return likha hai ....uska matlab cout karna hai}


