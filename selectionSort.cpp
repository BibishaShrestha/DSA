// Selection Sort
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
void selectionSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
			  min=j;	
			}
			
		}
		printArray(a,n);
		int t=a[i];
		a[i]=a[min];
		a[min]=t;
		
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
	selectionSort(arr,n);
	printArray(arr,n);
	return 0;
}
