#include<iostream>
using namespace std;
int main()
{
    int base, expo, num = 1;
    cin >> base >> expo;
    for (int i = 1; i <= expo; i++)
    {
        num = num * base;
    }

    cout << num << endl;
    return 0;
}