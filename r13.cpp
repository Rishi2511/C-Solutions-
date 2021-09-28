#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0 && n%3==0)
    {
    	cout<<" divisible by both ";

    }
    else if(n%2==0)
    	{
    	cout<<" divisible by only 2";

    }
    else if(n%3==0)
    	{
    	cout<<" divisible by only 3 ";

    }
    else
    	{
    	cout<<" not divisible by both ";

    }
	return 0;
}