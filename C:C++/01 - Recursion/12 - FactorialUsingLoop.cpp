#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    cout << "Factorial = " << fact << " \n";
    return 0;
}