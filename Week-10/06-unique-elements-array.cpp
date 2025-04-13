// This program prints all unique elements from an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[100], size;
    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique elements: ";
    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
