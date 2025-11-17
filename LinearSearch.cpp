// Linear Search
#include<iostream>
using namespace std;
int LinearSearch(int a[],int n, int key)
{
	for (int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;
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
	int LSresult=LinearSearch(arr,n,key);
	if(LSresult!=-1)
	{
		cout<<"Found at index: "<<LSresult;
	}
	else
	{
		cout<<"Not found";
	}
	return 0;
}
