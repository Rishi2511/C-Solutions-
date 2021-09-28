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

    void insert(node* &head,int val)
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
 
    node* reverse(node* &head)
    {
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

    node* recurrsionReverse(node* &head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        node* newhead=recurrsionReverse(head->next);
        head->next->next=head;
        head->next=NULL;

        return newhead;
    }

    node* reversek(node* &head,int k)
    {
        node* currptr=head;
        node* nextptr;
        node* preptr=NULL;

        int count=0;
        while(count<k && currptr!=NULL)
        {
            nextptr=currptr->next;
            currptr->next=preptr;

            preptr=currptr;
            currptr=nextptr;
            count++;
        }

        if(nextptr!=NULL) 
        {
          head->next=reversek(nextptr,k);
        }
        return preptr;


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
    node* fast=head;
    node* slow=head;
     
     do{
       slow=slow->next;
       fast=fast->next->next;
    }while (fast==slow);

   fast=head;
    while(fast->next!=slow->next)
    {
      
     slow=slow->next;
     fast=fast->next;
   }
   slow->next=NULL;
    

       

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
   insert(head,1);
   insert(head,2);
   insert(head,3);
   insert(head,4);
   insert(head,5);
   insert(head,6);
   
   makecycle(head,3);
//    cout<<detectcycle(head)<<endl;
display(head);
   




return 0;

}