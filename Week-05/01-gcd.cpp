#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2; // Taking input from the user

    // Finding GCD
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    cout << "GCD is " << num1 << endl; // Displaying the GCD

    return 0;
}
