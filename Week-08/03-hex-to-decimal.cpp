#include <iostream>
using namespace std;
int main()
{
    char hex;
    cout << "Enter Hex Char: ";
    cin >> hex;

    int decimal;
    if (hex >= '0' && hex <= '9')
        decimal = hex - '0';
    else if (hex >= 'A' && hex <= 'F')
        decimal = hex - 'A' + 10;
    else if (hex >= 'a' && hex <= 'f')
        decimal = hex - 'a' + 10;
    else
    {
        cout << "Invalid hex character" << endl;
        return 0;
    }
    cout << "Decimal number is " << decimal << endl;
    return 0;
}
