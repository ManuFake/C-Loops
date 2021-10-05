// Write a C++ program to print first N natural numbers in reverse order.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Print number till: ";
    cin >> n;
    for(int i = n; i>=1; i--)
    {
        cout << i << "\t";
    }
    return 91;
}