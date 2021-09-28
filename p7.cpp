#include<bits/stdc++.h>
using namespace std;


// void prefix(string s)
// {
//   stack<int> st;

// //   for(int i=s.length()-1;i>=0;i--)
// for(int i=0;i<s.lenght();i++)
//   {
//       if(s[i]>='0' && s[i]<='9')
//       {
//           st.push(s[i]-'0');
//       }
//       else{
//           int op1=st.top();
//           st.pop();
//           int op2=st.top();
//           st.pop();

//           switch (s[i])
          
//           {
//           case '+';
//           st.push(op1+op2);
//               break;
          
//           default:
//               break;
//           }
//       }
//   }
//   return st.top();
// }

int precedence(char c)
{
    if(c=='^')
    {
        return 1;
    }
    else if(c=='/' || c=='*')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}


void infixToPostfix(string s)
{
    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            
            st.push(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            res+=s[i];
        }
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }

        else{
            while(!st.empty() && )
        }
    }

}

int main(){
    


return 0;
}