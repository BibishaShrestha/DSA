// fibonacci series upto n using recursion
# include<iostream>
using namespace std;
int fibo(int x)
{
	if(x==0 || x==1)
	 return x;
	else
	 return fibo(x-1)+fibo(x-2);
}

int main()
{
	int n,i;
	cout<<"Enter the positive number: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<fibo(i)<<" ";
	}
	return 0;
}
