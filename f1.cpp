#include<iostream>
#define n 100
using namespace std;

class queue{
    int* arr;
    int front;
    int back;
    
    public:
    queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;

    }

    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"overflow"<<endl;
            return ;
        }
        back++;
        arr[back]=x;

        if(front==-1)
        {
            front++;
        }
    }

    void pop()
    {
        if(front==-1 || front>back)//this means no element added or all deleted
        {
            cout<<"no elements"<<endl;
            return;
        }
        front++;

    }

    int peeks()
    {
         if(front==-1 || front>back)//this means no element added or all deleted
        {
            cout<<"no elements"<<endl;
            return -1;
        }
        return arr[front];
        
        
    }

    bool empty()
    {
        if(front==-1 || front>back)//this means no element added or all deleted
        {
            cout<<"no elements"<<endl;
            return true;
        }
        return false;
    }
   
};
int main(){
    
queue q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);

cout<<q.peeks()<<endl;
q.pop();
cout<<q.peeks()<<endl;
q.pop();
cout<<q.peeks()<<endl;
q.pop();
cout<<q.peeks()<<endl;
q.pop();

cout<<q.empty()<<endl;
q.pop();


return 0;
}