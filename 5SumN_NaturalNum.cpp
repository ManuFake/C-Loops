// Write a program to calculate sum of first N natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "N natural no.: ";
    cin >> n;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}