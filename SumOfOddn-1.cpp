// Sum of odd numbers upto n-1
#include<iostream>
using namespace std;

int recursion(int n)
{
    if(n <= 0)
        return 0;

    if(n % 2 == 1)    
        return n + recursion(n - 2);
    else             
        return recursion(n - 1);
}

int main()
{
    int num, sum = 0;
    cout << "Enter the value of n: ";
    cin >> num;

    sum = recursion(num - 1);  

    cout << "Sum of odd numbers up to n-1: " << sum;
    return 0;
}

