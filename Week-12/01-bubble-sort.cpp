#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // Bubble Sort Algorithm
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap the elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order:\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
