#include<iostream>
#include<climits>


using namespace std;
int kadane(int a[],int n)
{
	int currentsum=0;
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++)
	{
		currentsum+=a[i];
		if(currentsum<0)
		{
			currentsum=0;
		}
		maxsum=max(currentsum,maxsum);
	}
	
	return maxsum;
}

int main()
{   int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

    int wrapsum;  //ye 1 pehla type ka sum hai
    int nowrapsum; // ye dusra type ka sum hai --> ab dono me jo bada hoga vo print hoga
    nowrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
    	
    	totalsum+=a[i];
    	a[i]=-a[i];
    }
    wrapsum=totalsum+kadane(a,n); // idhar jo kadane(non contributing elements ka sum) hai usme jo array liya hai , uske sare elements negative ho jaenge uspar vali statement ki vajah se
    cout<<max(wrapsum,nowrapsum)<<endl;

    

        return 0;
    }





    