#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum, digitCount = 0;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;    // Taking input 

    sum = num1 + num2;     // Calculating sum

    // Counting digits without using library function
    int temp = sum;
    do
    {
        digitCount++;
        temp /= 10;
    } while (temp != 0);

    // Displaying results
    cout << "Sum = " << sum << endl;
    cout << "Total Digits of Sum is " << digitCount << endl;

    return 0;
}
