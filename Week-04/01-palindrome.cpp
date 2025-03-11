#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, reversedNum = 0, digit;

    cout << "Enter a 5-digit number: ";
    cin >> num;

    originalNum = num;

    // Reversing the number
    while (num > 0)
    {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Checking if the number is a palindrome
    if (originalNum == reversedNum)
        cout << "The number " << originalNum << " is a palindrome." << endl;
    else
        cout << "The number " << originalNum << " is not a palindrome." << endl;

    return 0;
}
