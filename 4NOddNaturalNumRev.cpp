// Write a C++ program to print first N odd natural number in reverse order.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Reverse odd number: ";
    cin >> n;
    if(0 == n % 2)
    {
        n--;
    }
    for(int i=n; i>=1;i -= 2)
    {
        cout << i << "\t";
        
    }
    return 91;
}