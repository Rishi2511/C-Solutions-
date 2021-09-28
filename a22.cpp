#include<iostream>
#include<climits>


using namespace std;
bool pairsum(int a[],int k,int n)
{
	int low=0;
	int high=n-1;

	for(int i=0;i<n;i++)
	{
		while(high>low)
		{
			if(a[high]+a[low]==k)
			{
				cout<<low<<" "<<high<<endl;
				return true;
			}
			else if(a[high]+a[low]>k)
			{
				high--;
			}
			else
			{
				low++;
			}
		}
	}
	return false;

}

int main()
{   int n=7;
	
	int a[]={1,3,5,7,9,11,19};
	int k=28;

	cout<<pairsum(a,k,n)<<endl;


	
	
    

        return 0;
    }