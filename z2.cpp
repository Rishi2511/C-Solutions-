#include<bits/stdc++.h>

using namespace std;

void displayreversearray(int arr[],int n,int idx)
{
    if(idx==n)
    {
        return;
    }

    displayreversearray(arr,n,idx+1);
    
    cout<<arr[idx]<<endl;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    displayreversearray(arr,n,0);

return 0;
}