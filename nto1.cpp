// To print from n to 1
#include<iostream>
using namespace std;
void recursion(int i,int n)
{
	if(i<n)
	{
		return ;
	}
	cout<<i;
	recursion(i-1,n);
}
int main()
{
	int num;
	cout<<"Enter the value of n: ";
	cin>>num;
	recursion(num,1);
	return 0;
}

