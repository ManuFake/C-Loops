// Write a C++ program to print first N even natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Even numbers till:  ";
    cin >> n;
    for(int i=2; i<=n;)
    {
        cout << i << "\t";
        i += 2;
    }
}