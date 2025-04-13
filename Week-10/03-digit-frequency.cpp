// This program finds the frequency of each digit (0-9) in a number.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int freq[10]; // to store frequency of digits 0 to 9
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }

    while (n > 0)
    {
        int digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "The frequency of " << i << " = " << freq[i] << endl;
    }

    return 0;
}
