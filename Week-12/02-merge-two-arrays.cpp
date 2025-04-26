#include <iostream>
using namespace std;

int main() {
    int arr1[] = {0, 3, 5, 9, 10}; // First sorted array
    int arr2[] = {2, 4, 7, 11};    // Second sorted array

    int size1 = sizeof(arr1) / sizeof(arr1[0]); // Size of first array
    int size2 = sizeof(arr2) / sizeof(arr2[0]); // Size of second array

    int arr3[size1 + size2]; // Third array to store merged elements

    int i = 0, j = 0, k = 0;

    // Merge the two arrays into arr3 in ascending order
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Store remaining elements of arr1
    while (i < size1) {
        arr3[k++] = arr1[i++];
    }

    // Store remaining elements of arr2
    while (j < size2) {
        arr3[k++] = arr2[j++];
    }

    // Print the merged sorted array
    cout << "Merged array in ascending order:\n";
    for (int idx = 0; idx < k; idx++) {
        cout << arr3[idx];
        if (idx != k - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
