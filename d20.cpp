#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
    };

    void insertAtTail(node* &head,int val)
    {
        node* n=new node(val);
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
    
    int len(node* &head)
    {   
        node* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }

    node* kappend(node* &head,int k)
    {
        node* newhead;
        node* newtail;
        node* tail=head;//iske through traverse karenge
          
          int length=len(head);
          k=k%length; // if k is greater than length  
          int count=1;
        while(tail->next!=NULL)
        {
          if(count==length-k)
          {
              newtail=tail;
          }
          if(count==length-k+1)
          {
              newhead=tail;
          }
          tail=tail->next;
           count++;
        }
        newtail->next=NULL;
        tail->next=head;
        return newhead;
    }

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{  
    node* head=NULL;
    // insertAtTail(head,1);
    // insertAtTail(head,2);
    // insertAtTail(head,3);
    // insertAtTail(head,4);
    // insertAtTail(head,5);
    // insertAtTail(head,6);

    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
     
    
     node* newhead=kappend(head,2);
     display(newhead);

return 0;
}

   
	
