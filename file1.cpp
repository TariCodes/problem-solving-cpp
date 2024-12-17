#include <iostream>
using namespace std;

int main()
{
    int n1, n2, sum, product, difference, quotient;

    cout << "Enter Numbers: " << endl;
    cin >> n1 >> n2;

    sum = n1 + n2;
    cout << "sum of numbers are: " << sum << endl;

    product = n1 * n2;
    cout << "product of numbers are: " << product << endl;

    difference = n1 - n2;
    cout << "difference of numbers are: " << difference << endl;

    quotient = n1 / n2;
    cout << "quotient of numbers are: " << quotient << endl;
}