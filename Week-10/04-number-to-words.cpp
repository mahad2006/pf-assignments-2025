#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digits[20]; // to store digits
    int count = 0;

    if (n == 0)
    {
        cout << "Zero" << endl;
        return 0;
    }
    // Store digits in reverse order
    while (n > 0)
    {
        digits[count] = n % 10;
        n = n / 10;
        count++;
    }
    // Print digits using switch
    for (int i = count - 1; i >= 0; i--)
    {
        switch (digits[i])
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    cout << endl;
    return 0;
}
