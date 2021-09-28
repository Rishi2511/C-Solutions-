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

    void insertAtLast(node* &head,int val)
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
 
    node* reverse(node* &head){
        node* preptr=NULL;
        node* currptr=head;
        node* nextptr;

        while(currptr!=NULL)
        {
            nextptr=currptr->next;
            currptr->next=preptr;

            preptr=currptr;
            currptr=nextptr;
        }
        return preptr;
    }

    node* reverseRecursive(node* &head)
    {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
      node* newhead=reverseRecursive(head->next); // it will return newhead
      head->next->next=head; // to point 2nd pointer at 1st pointer
      head->next=NULL;

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
    cout<<endl;
}


int main()
{
    node* head=NULL;
    insertAtLast(head,1);
    insertAtLast(head,2);
    insertAtLast(head,3);
    display(head);


    node* newhead=reverseRecursive(head);
    display(newhead);
	

return 0;
}