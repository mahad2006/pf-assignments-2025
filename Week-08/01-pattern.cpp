#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Input number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int sum = 0;
        // Loop to print numbers and calculate sum
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            sum += j;
            if (j < i)
                cout << " + ";
        }
        cout << " = " << sum << endl;
    }
    return 0;
}