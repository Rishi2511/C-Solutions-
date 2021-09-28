#include<bits/stdc++.h>

using namespace std;

int maxelement(int arr[],int n,int idx)
{
    
    if(idx==n-1)
    {
        return arr[idx];
    }
    
    int misa=maxelement(arr,n,idx+1); 
    
    if(misa>arr[idx])
    {
        return misa;
    }
    else{
        return arr[idx];
    }
    


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

    cout<<maxelement(arr,n,0);

return 0;
}