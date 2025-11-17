// Bubble Sort
#include<iostream>
using namespace std;
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	  cout<<a[i]<<" ";	
	}
	cout<<endl;
}
void bubbleSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			  int t=a[j];
	      	  a[j]=a[j+1];
		      a[j+1]=t;
			}	
		}
		printArray(a,n);
	}
}
int main()
{
	int n,arr[n];
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubbleSort(arr,n);
	printArray(arr,n);
	return 0;
}
