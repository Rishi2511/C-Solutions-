#include<iostream>

using namespace std;

int main()
{
	int n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

	}

	int k;
	cin>>k;

	for(int i=0;i<n-1;i++)
    {
		int j=i+1;
		if(arr[i]>arr[j])
		{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;

			

		}
		j++;
		cout<<arr[k-1]<<endl;
		cout<<arr[k-1];
	}

	return 0;
}