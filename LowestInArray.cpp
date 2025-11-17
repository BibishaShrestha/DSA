// To find the lowest number in an array
#include<iostream>
using namespace std;
int lowest(int a[],int n)
{
	int digit,low;
	if(n==0)
	 return 0;
	if (n==1)
	 return a[0];
   low=lowest(a+1,n-1);
    return (a[0]<low)? a[0]:low;
}
int main()
{
	int num,l,a[50];
	cout<<"Enter the no. of elements: ";
	cin>>num;
	cout<<"Enter the elements: ";
    for(int i=0;i<num;i++)
    cin>>a[i];
	l=lowest(a,num);
	cout<<"The lowest number in the array is: "<<l;
	return 0;
}

