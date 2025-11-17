// Sum of odd numbers upto n
#include<iostream>
using namespace std;
int recursion(int n)
{
	if(n<=0)
	{
		return 0;
	}
	if(n%2==0)
	 return (n-1)+recursion(n-2);
	if(n%2!=0)
     return (n)+recursion(n-1);
}
int main()
{
	int num,sum=0;
	cout<<"Enter the value of n: ";
	cin>>num;
	sum=recursion(num);
	cout<<"Sum of odd numbers upto n: "<<sum;
	return 0;
}

