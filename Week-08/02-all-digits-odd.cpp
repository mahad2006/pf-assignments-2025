#include <iostream>
using namespace std;
int main()
{
    int num;
    while (true)
    {
        cout << "Enter a number (-1 to exit): ";
        cin >> num;
        if (num == -1)
            break;

        bool allOdd = true;
        int temp = num;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit % 2 == 0)
            {
                allOdd = false;
                break;
            }
            temp /= 10;
        }
        if (allOdd)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    cout << "Program has ended. Thank you!";
    return 0;
}
