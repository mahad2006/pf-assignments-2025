// This program calculates the percentage of even numbers in an array.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int nums[100]; // assuming max 100 elements
    int evenCount = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
        if (nums[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    float percentage;
    if (size == 0)
    {
        percentage = 0.0;
    }
    else
    {
        percentage = (evenCount * 100.0) / size;
    }
    cout << "Percentage of even numbers: " << percentage << "%" << endl;
    return 0;
}
