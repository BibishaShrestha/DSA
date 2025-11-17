// nth power of a digit x
#include<iostream>
using namespace std;
int power(int x,int n)
{
	if(n==0)
	 return 1;
	else
	{
	 return x*power(x,n-1);	
	}	
}
int main()
{
	int num,p,result;
	cout<<"Enter the number and power: ";
	cin>>num>>p;
	result=power(num,p);
	cout<<result;
	return 0;
}

