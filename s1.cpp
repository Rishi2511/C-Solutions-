#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=(n-1);
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=s;j++)
        {
            cout<<"*";
        }

        for(int j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1))
            {
                cout<<"*";
            }

            else
            {
                cout<<" ";
            }
        }
        
         for(int j=1;j<=s;j++)
        {
            cout<<"*";
        }

         s--;
        cout<<endl;
    }
    
    
     s=0;
    for(int i=n;i>=1;i--)
    {
         
        for(int j=1;j<=s;j++)
        {
            cout<<"*";
        }

        for(int j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1))
            {
                cout<<"*";
            }

            else
            {
                cout<<" ";
            }
        }
        
         for(int j=1;j<=s;j++)
        {
            cout<<"*";
        }
        s++;
        cout<<endl;
    }
    

}