// Singly or Single Linked List
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
   struct Node* head=NULL;
   struct Node* ptr=NULL;
   struct Node* temp=NULL;
Node *createNode(int data)
{
	struct Node* newNode= new Node;
	if (newNode==NULL)
	{
		exit(1);
	}
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
void display()
{
	Node *ptr=head;
	cout<<"List: ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}
void insertB(int data)
{
	Node* newNode=createNode(data);
	if(head==NULL)
	{
	  head= newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
}
void insertE(int data)
{
  struct Node* newNode=createNode(data);
  if (head==NULL)
  {
  	head=newNode;
  }
  else
  {
    Node *ptr=head;
    while(ptr->next!=NULL)
    {
    	ptr=ptr->next;
	}
	ptr->next=newNode;
  }
}

void insertKth(int data,int pos)
{
	struct Node* newNode=createNode(data);
	if (pos<0)
	{
		cout<<"Invalid position";
	}
	else if(pos==0)
	{
		insertB(data);
	}
	else
	{
		Node *ptr=head;
		for (int i=0;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
		newNode->next=ptr->next;
		ptr->next=newNode;
	}	
}
void deleteB()
{
	if(head==NULL)
	{
		cout<<"Empty List";
	}
	else
	{
		Node *ptr=head;
		head=head->next;
		delete ptr;
	}
}
void deleteE()
{
	if(head==NULL)
	{
		cout<<"Empty List";
	}
	else if(head->next==NULL)
	{
		Node *ptr=head;
		head=NULL;
		delete ptr;
	}
	else
	{
		Node *ptr=head;
		while(ptr->next!=0)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		delete ptr;
	}
}
void deleteKth(int pos)
{
	if (pos<0)
	{
		cout<<"Invalid position";
	}
	else if(pos==0)
	{
		deleteB();
	}
	else
	{
		ptr=head;
		for (int i=0;i<pos;i++)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		delete ptr;
	}
}
void updateKth(int newdata,int pos)
{
	if (pos<0)
	{
		cout<<"Invalid position";
	}
	else 
	{
		Node *ptr=head;
		for(int i=0;i<pos;i++)
		{
			ptr=ptr->next;
		}
		ptr->data=newdata;
	}
}

int main()
{
	int choice,data,pos,newdata;
	while(true){
	cout<<"Enter the choice: 1. IB, 2.IE, 3.IK, 4.DB, 5.DE, 6.DK, 7.UK, 8.Display, 9.Exit"<<endl;
	/*IB= insert at the beginning
	 IE= insert at the end
	 IK= insert at the kth position
	 DB= delete from the beginning
	 DE= delete from the end
	 DK= delete from the kth position
	 UK= update at the kth position
	*/
	cout<<"Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the data: ";
			cin>>data;
			insertB(data);
			display();
			break;
		case 2:
			cout<<"Enter the data: ";
			cin>>data;
			insertE(data);
			display();
			break;
		case 3:
			cout<<"Enter the data: ";
			cin>>data;
			cout<<"Enter the position: ";
			cin>>pos;
			insertKth(data,pos);
			display();
			break;
		case 4:
			deleteB ();
			display();
			break;
		case 5:
			deleteE();
			display();
			break;
		case 6:
			cout<<"Enter the position: ";
			cin>>pos;
			deleteKth(pos);
			display();
			break;
		case 7:
			cout<<"Enter the new data: ";
			cin>>newdata;
			cout<<"Enter the position: ";
			cin>>pos;
			updateKth(newdata,pos);
			display();
			break;
		case 8:
			display();
			break;
		case 9:
			return 0;
		default:
			cout<<"Invalid choice!";
	    return 0;	
	}	
}
}

