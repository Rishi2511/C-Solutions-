#include<bits/stdc++.h>

using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

                  
void insert(node* &head,int val)
{  node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void makecycle(node* &head,int pos)
{
    node* temp=head;
    node* startnode;
    
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
bool detectcycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
       slow=slow->next;
       fast=fast->next->next;

       if(fast==slow) 
       {
           return true;
       }
    }
    return false;
    
}

void removecycle(node* &head)
{
   node* slow=head;
   node* fast=head;

   do // bcz. initially dono same the ,to chalta nahi isliye do-while use kiya hai
   {
       slow=slow->next;
       fast=fast->next->next;
   } while (slow!=fast);

   fast=head;
   while (slow->next!=fast->next)
   {
     slow=slow->next;
     fast=fast->next;
   }
   slow->next=NULL;
   
}

void display(node* head){
node* temp=head;

while (temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"null"<<endl;

} 


int main()
{
   node* head=NULL;
   insert(head,1);
   insert(head,2);
   insert(head,3);
   insert(head,4);
   insert(head,5);
   insert(head,6);
   
   makecycle(head,3);
   cout<<detectcycle(head)<<endl;
   removecycle(head);
   cout<<detectcycle(head)<<endl;
   display(head);





return 0;

}