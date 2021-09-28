#include<iostream>

using namespace std;

int main()
{
	int n,a=5,d=2,an,sn;
	cin>>n;
    for(int i=1;i<=n;i++)
    {	
        an=a+((i-1)*d);
    	cout<<"term"<<i<<"="<<an<<endl;	
    	sn=an+sn;
    }
    cout<<"sum="<<sn;
	return 0;
}

