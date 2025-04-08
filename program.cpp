#include <iostream>
using namespace std;

void moveNegativeToOneSide(int arr[], int n) {
    int temp[n]; // Temporary array to hold negative numbers
    int j = 0;   // Index for temp array
    
    // First, store all negative numbers in the temp array
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp[j++] = arr[i];
        }
    }
    
    // Then, store all non-negative numbers after the negative ones
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp[j++] = arr[i];
        }
    }
    
    // Copy the elements from temp array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    moveNegativeToOneSide(arr, n);

    cout << "Array after moving negatives to one side: ";
    printArray(arr, n);

    return 0;
}
