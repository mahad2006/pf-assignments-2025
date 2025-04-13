// This program removes all odd digits from a given integer.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = 0;
    int multiplier = 1;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        { // check if the digit is even
            result +=  digit * multiplier;
            multiplier *= 10;
        }
        n /= 10; // remove the last digit
    }

    cout << "Number after removing odd digits: " << result << endl;
    return 0;
}
