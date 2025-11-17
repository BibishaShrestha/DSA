// Binary Search using insertion sort
#include<iostream>
using namespace std;
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
	}
}
int BinarySearch(int a[],int n,int key)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==key)
		{
			return m;
		}
		else if(a[m]<key)
		{
			l=m+1;
		}
		else
		{
			r=m-1;
		}
	}
	return -1;
}
int main()
{
	int arr[]={13,2,4,20,74,47};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key;
	cout<<"Enter the number: ";
	cin>>key;
	insertionSort(arr,n);
	int BSresult=BinarySearch(arr,n,key);
	if(BSresult!=-1)
	{
		cout<<"Found at index: "<<BSresult;
	}
	else
	{
		cout<<"Not found";
	}
	return 0;
}


