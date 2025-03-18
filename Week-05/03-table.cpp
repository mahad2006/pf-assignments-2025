#include <iostream>
using namespace std;

int main()
{
    int num;

    // Taking input from the user
    cout << "Print the multiplication table of a number up to 10:" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Input a number: ";
    cin >> num;

    // Printing the multiplication table
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
