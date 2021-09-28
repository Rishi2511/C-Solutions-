  #include<iostream>

using namespace std;
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
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
	{

    cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
}
cout<<endl;
}
return 0;
}
 
	

