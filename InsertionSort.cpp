// Insertion Sort
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
void insertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=a[i];
		int j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
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
	insertionSort(arr,n);
	printArray(arr,n);
	return 0;
}
