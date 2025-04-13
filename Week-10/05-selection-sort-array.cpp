// This program sorts an array using the selection sort algorithm.
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

    // Selection sort
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
