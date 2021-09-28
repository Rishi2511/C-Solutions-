#include<iostream>
using namespace std;
//int digits(int ans)

int factorial(int n)
{
	int ans=1;
	
	for(int i=2;i<=n;i++)
	{
		ans*=i;
	}
	return ans;

}

int main()
{
	int n;
	cin>>n;
	int factorialvalue=factorial(n);

	cout<<factorialvalue<<" "<<endl;//factorial(n)
	//cout<<"no of digit="<<" "<<digits(n);
	return 0;
}