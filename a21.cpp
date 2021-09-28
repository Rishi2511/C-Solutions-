#include<iostream>
#include<climits>


using namespace std;
bool pairsum(int a[],int k,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				cout<<i<<" "<<j<<endl;
				return true;
			}

		}
	}
	return false;
}

int main()
{  
	int n=7;
	int a[]={2,4,6,8,11,12,13};
	int k=18;
	cout<<pairsum(a,k,n);

    

        return 0;
    }