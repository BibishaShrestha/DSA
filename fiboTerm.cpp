// nth fibonacci term using recursion
# include<iostream>
using namespace std;
int fibo(int x)
{
	if(x==1)
	 return 0;
	else if(x==2)
	 return 1;
	else
	 return fibo(x-1)+fibo(x-2);
}

int main()
{
	int n,x;
	cout<<"Enter the number of term: ";
	cin>>n;
	cout<<"The term is: "<<fibo(n);
	return 0;
}
