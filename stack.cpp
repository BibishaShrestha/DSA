#include<iostream>
#define MAX_SIZE 5
using namespace std;
int stack[MAX_SIZE];
int top= -1;

int push(int data)
{
	if(top==MAX_SIZE-1)
	{
		cout<<"Stack Overflow";
	}
	else
	{
		cout<<"Enter the data";
		cin>>data;
		top++;
		stack[top]=data;
		cout<<data<<" pushed to the stack"<<endl;
	}
}
int pop()
{
	if(top== -1)
	{
		cout<<"Stack underflow";
	}
	else
	{
		int Pdata=stack[top];
		top--;
		cout<<Pdata<<" popped from stack"<<endl;
	}
}
bool isFull()
{
	return top==MAX_SIZE-1;
}
bool isEmpty()
{
	return top== -1;
}
int peek()
{
  if(top== -1)
	{
		cout<<"Stack underflow";
	}
  else
	{
		cout<<"Top element is: "<<stack[top]<<endl;
	}
}
int display()
{
	int i;
	if(top== -1)
	{
		cout<<"Stack underflow";
	}
	else
	{
		for(i=0;i<=top;i++)
		{
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int choice,data;
	while(true){
	cout<<"Enter the choice: 1. push, 2.pop, 3.peek, 4.display, 5.exit"<<endl;
	cout<<"Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			push(data);
			display();
			break;
		case 2:
			pop();
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

