#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int sum, difference, product, modul;
    float quotient;
    cout << "Enter First Number\n";
    cin >> x;
    cout << "Enter Second Number\n";
    cin >> y;
    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = (float)x / y;
    modul = x % y;
    cout << "\nSum = " << sum;
    cout << "\nDifference  = " <<difference;
    cout << "\nMultiplication = " << product;
    cout << "\nDivision = " << quotient;
    cout << "\nRemainder = " << modul;
    return 0;
}