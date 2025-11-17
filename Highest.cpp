// To find the highest digit in a number
#include<iostream>
using namespace std;
int highest(int n)
{
	int digit,a;
	if(n==0)
	 return 0;
	digit=n%10;
	a=highest(n/10);
	if(digit>a)
	 return digit;
	else
	 return a;
	
	
}
int main()
{
	int num,high;
	cout<<"Enter the number: ";
	cin>>num;
	high=highest(num);
	cout<<"The highest digit is: "<<high;
	return 0;
}

