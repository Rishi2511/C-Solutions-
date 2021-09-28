#include<bits/stdc++.h>
using namespace std;

class node{
 public:
 int data;
 node* next;
 node* pre;

 node(int var)
 {
     data=var;
     next=NULL;
     pre=NULL;
 }
};

void deleteAtHead(node* head)
{
    node* todelete=head;
    head=head->next;
    head->pre=NULL;
    delete todelete;
}

void deletion(node* head,int pos)
{
    node* temp=head;
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }

    int count=1;

    while(temp!=NULL && count!=pos)
    {
       temp=temp->next;
    }
    
    temp->pre->next=temp->next;
    temp->next->pre=temp->pre;

    delete temp;
}

int length(node*head)
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

node* appendk(node* head,int k)
{
  node* newtail;
  node* newhead;
  node* tail=head;
  int l=length(head);
  k=k%l;
  int count=1;
  while(tail->next!=NULL)
  {
    if(count==l-k)
    {
        newtail=tail;
    }
    if(count==l-k+1)
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

void insertAtHead(node* head,int var)
{
    node* n=new node(var);
    n->next=head;
    while ( (head!=NULL))
    {
         head->pre=n;
    }
    head=n;   
}


void insertAtTail(node* &head,int var)
{
    node* n=new node(var);

    if(head=NULL)
    {
        insertAtHead(head,var);
        return;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->pre=temp;
}
int main()
{
  
}
    
