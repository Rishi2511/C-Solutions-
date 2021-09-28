#include<bits/stdc++.h>

using namespace std;

int lastindex(int arr[],int n,int idx,int key)
{
if(idx==n)
{
    return -1;
}

int lisa=lastindex(arr,n,idx+1,key);

if(lisa==-1)
{
    if(arr[idx]==key)
    {
        return idx;
    }
    else
    {
        return -1;
    }
}
else{
    return lisa;
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

    cout<<lastindex(arr,n,0,key);
return 0;
}