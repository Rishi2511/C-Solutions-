#include<bits/stdc++.h>

using namespace std;

int firstindex(int arr[],int n,int idx,int key)
{
if(idx==n)
{
    return -1;
}

if(arr[idx]==key)
{
    return idx;
}
else{

   return firstindex(arr,n,idx+1,key);
}

}

int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];

    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<firstindex(arr,n,0,key);
return 0;
}