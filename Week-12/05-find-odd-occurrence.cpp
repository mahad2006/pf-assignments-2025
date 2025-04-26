#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 2, 3, 3, 9, 9, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = 0; // Initialize result to avoid garbage value

    // Find the number that occurs an odd number of times
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            result = arr[i];
            break; // Once found, no need to check further
        }
    }

    cout << "Number which occurs odd number of times: " << result << endl;
    return 0;
}
