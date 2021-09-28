#include<bits/stdc++.h>

using namespace std;

int printindices(int arr[],int n,int key,int idx,int fsf)
{
if(arr[idx]==key)
{
    printindices(arr,n,key,idx+1,fsf+1);
}
else{
    printindices(arr,n,key,idx+1,fsf);
}
 

}

int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    printindices(arr,n,key,0,0);

    return 0;
}
