#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Reverse the array without using a second array or extra variable
    for (int i = 0; i < size / 2; i++)
    {
        arr[i] = arr[i] + arr[size - i - 1];
        arr[size - i - 1] = arr[i] - arr[size - i - 1];
        arr[i] = arr[i] - arr[size - i - 1];
    }

    // Print the reversed array
    cout << "Array after reversing:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
