#include<iostream>

using namespace std;

int main()

{
	int n,ans=1;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		ans*=i;

	}
	cout<<n<<"!="<<ans<<endl;
    return 0;
}



{hint  ans*=i means ans=ans*i }
