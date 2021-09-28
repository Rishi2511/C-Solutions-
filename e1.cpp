#include<iostream>
#define n 3
using namespace std;

class stack{

    int* arr;
    int top;

    public: 
    stack(){
      arr=new int[n]; 
      top=-1;
    }

    void push(int x)
    {
        if(top==n-1){                    
            cout<<"stack overflow"<<endl;//because pehle increment hoga then value add hogi
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;// jo top ke baad ke elements hai unki koi importance nahi hai
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }

bool empty()
{
    return top==-1;


}

};


int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    // st.pop();
    // cout<<st.Top()<<endl;
    // st.pop();
    // st.pop();
    // st.pop();
    // cout<<st.empty();

return 0;
}





























































































    