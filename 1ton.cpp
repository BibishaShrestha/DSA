// To print from 1 to n
#include<iostream>
using namespace std;
void recursion(int i,int n)
{
	if(i>n)
	{
		return ;
	}
	cout<<i;
	recursion(i+1,n);
}
int main()
{
	int num;
	cout<<"Enter the value of n: ";
	cin>>num;
	recursion(1,num);
	return 0;
}

