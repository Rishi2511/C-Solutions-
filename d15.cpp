
#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next ; // bcz. next node ka address store kar rahe hai 

	node(int val)
	{
      data = val;
	  next = NULL;
	}

	};
	void insertAtTail(node* &head,int val) //by refrence bcz. hume apni l.l. ko modify karna hai. 
	{
		node* n=new node(val);
        
		if(head==NULL)
		{
			head=n;
			return;
		}

		node* temp=head; //starting the iteration (iterating through a pointer)
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=n;
	}

	void insertAtHead(node* &head,int val){
     
	 node* n=new node(val);
	 n->next=head;// bcz. head me previously jo 1st node tha vo stored tha
	 head=n;
	}

	

	bool search(node* head,int key)
	{
		node* temp=head;
		while(temp!=NULL)
		{
			if(temp->data==key)
			{
				return true;
			}
			temp=temp->next;
		}
		return false;
	}

	void deleteAtHead(node* &head)
	{
      
	  node* todelete=head;
	  head=head->next;

	  delete todelete;//taki memory leak naa ho  
	}

	void deletion(node* &head,int val)
	{
		if(head==NULL)
		{
			return;
		}

		if(head->next==NULL)
		{
			deleteAtHead(head);
			return;
		}
		node* temp=head; //traverse karne ke liye
		while(temp->next->data!=val)
		{
			temp=temp->next;
		}
		node* todelete=temp->next;
		temp->next=temp->next->next;
		
		delete todelete;

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

		preptr=currptr; // incrementing the pointers
		currptr=nextptr;
	}
return preptr;
}

	void display(node* head) //call by value karenge bcz. apan l.l. ko modify nahi kar rhe
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
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,3);
display(head);
// insertAtHead(head,4);
// display(head);
// cout<<search(head,5)<<endl;
// deletion(head,3);
// display(head);
// deleteAtHead(head);
// display(head);

node* newhead=reverse(head);
display(newhead);



return 0;
}

