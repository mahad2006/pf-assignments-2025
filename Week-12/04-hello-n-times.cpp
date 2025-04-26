#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive number less than 1000: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i;

        // Handle special cases: 11th, 12th, 13th
        if (i % 100 == 11 || i % 100 == 12 || i % 100 == 13)
        {
            cout << "th";
        }
        else if (i % 10 == 1)
        {
            cout << "st";
        }
        else if (i % 10 == 2)
        {
            cout << "nd";
        }
        else if (i % 10 == 3)
        {
            cout << "rd";
        }
        else
        {
            cout << "th";
        }

        cout << " Hello" << endl;
    }

    return 0;
}
