// Move disk in Tower of Hanoi
#include<iostream>
using namespace std;
void TOH(int n,char x,char y,char z)
{
	if(n==0)
	 return;
    else if(n==1)
	{
		cout<<"Move disk 1 from "<<x<<" to "<<z<<endl;		
	}	
	else
	{
		TOH(n-1,x,z,y);
		cout<<"Move disk "<<n<<" from "<<x<<" to "<<z<<endl;
		TOH(n-1,y,x,z);
	}
}
int main()
{
	int num;
	cout<<"Enter the number of disk: ";
	cin>>num;
    TOH(num,'A','B','C');
	return 0;
}

