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
void evenAfterOdd(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart=even;

    while (odd->next!=NULL && even->next!=NULL)
    {
      odd->next=even->next;
      odd=odd->next;
      even->next=odd->next;
      even=even->next;
    }

    odd->next=evenStart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }

    
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
   display(head);
 

 display(head);
 evenAfterOdd(head);
 display(head);


return 0;

}