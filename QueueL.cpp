#include<iostream>
#define MAX_SIZE 5
using namespace std;
int queue[MAX_SIZE];
int front= -1;
int rear= -1;

void enqueue(int data)
{
	if(rear==MAX_SIZE-1)
	{
		cout<<"Queue Overflow";
	}
	else
	{
		if (front ==-1)
		{
			front=0;
		}
		cout<<"Enter the data";
		cin>>data;
		rear++;
		queue[rear]=data;
		cout<<data<<" pushed to the queue"<<endl;
	}
}
void dequeue()
{
	if(front== -1|| front>rear)
	{
		cout<<"Queue underflow";
	}
	else
	{
		int Pdata=queue[front];
		queue[front]=NULL;
		front++;
		cout<<Pdata<<" popped from queue"<<endl;
	}
}
bool isFull()
{
	return rear==MAX_SIZE-1;
}
bool isEmpty()
{
	return front == -1;
}
void peek()
{
  if(front== -1||front>rear)
	{
		cout<<"Queue underflow";
	}
  else
	{
		cout<<"Top element is: "<<queue[rear]<<endl;
	}
}
void display()
{
	int i;
	if(front== -1||front>rear)
	{
		cout<<"Queue underflow";
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int choice,data;
	while(true){
	cout<<"Enter the choice: 1. Enqueue, 2.Dequeue, 3.peek, 4.display, 5.exit"<<endl;
	cout<<"Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			enqueue(data);
			display();
			break;
		case 2:
			dequeue();
			display();
			break;
		case 3:
			peek();
			display();
			break;
		case 4:
			display();
			break;
		case 5:
			return 0;
		default:
			cout<<"Invalid choice";
		return 0;
	}
	}
}

