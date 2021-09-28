#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefix(string s)
{
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--)
    {
      if(s[i]>='0' && s[i]<='9')
      {
          st.push(s[i]-'0'); //bcz. we have to push it as an integer
      }
      else
      {
          int op1=st.top();
          st.pop();
          int op2=st.top();
          st.pop();

      
      switch (s[i]) //bcz. ye +,-,/,^ sab s[i] hi to hai ...
      {
      case '+':    
          st.push(op1+op2);
          break;
      case '-':
          st.push(op1-op2);
          break;
      case '/':
          st.push(op1/op2);
          break;
      case '^':
          st.push(pow(op1,op2));
          break;
      
      
      }
      }
          
    }
    return st.top();
}

int main()
{
    cout<<prefix("-+7*45+20")<<endl;
    return 0;
}