#include<iostream>
#include<climits>


using namespace std;

int main()
{  int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-i-1]) //issevfirst aur last and similarly baaki sab bhi check ho jaenge
        {
            check=0;
            break;
        }
    }
    if(check)
    {
        cout<<"word is a palindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }


	
	
    

        return 0;
    }