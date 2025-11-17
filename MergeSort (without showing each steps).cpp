// Merge sort without each steps
#include<iostream>
using namespace std;

void printArray(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void merge(int a[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];

	for(int i = 0; i < n1; i++)
		L[i] = a[l + i];
	for(int j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];

	int i = 0, j = 0, k = l;

	while(i < n1 && j < n2)
		a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
	while(i < n1)
		a[k++] = L[i++];
	while(j < n2)
		a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r)
{
	if(l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}

int main()
{
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;

	int arr[n];
	cout << "Enter the elements: ";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	mergeSort(arr, 0, n - 1);
	cout << "Sorted array: ";
	printArray(arr, n);

	return 0;
}

