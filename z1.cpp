#include<bits/stdc++.h>

using namespace std;

void displayarray(int arr[],int n,int idx)
{
    
    if(idx==n)
    {
        return;
    }
    
    cout<<arr[idx]<<" ";
    
    displayarray(arr,n,idx+1); // n is not representing the current size instead the actual size


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

    displayarray(arr,n,0);

return 0;
}