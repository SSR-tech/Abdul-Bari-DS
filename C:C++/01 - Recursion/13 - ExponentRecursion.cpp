#include<iostream>
using namespace std;
int power(int base, int expo)
{
    if(expo == 0)
        return 1;
    return power(base, expo - 1) * base;
}

int power1(int base, int expo)
{
    if(expo == 0)
        return 1;
    if(expo%2 == 0)
        return power(base * base, expo / 2);
    return base * power1(base * base, (expo - 1) / 2);
}

int main()
{
    int r = power1(3,3);
    cout << r <<" \n";
    return 0;
}