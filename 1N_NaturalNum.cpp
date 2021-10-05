// Write a program to print first N natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Print number till: ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cout << i << "\t";
    }
}