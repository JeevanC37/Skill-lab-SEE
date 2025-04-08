#include <stdio.h>

void moveNegativesToLeft(int arr[], int size) {
    int j = 0; // index for the next negative number

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            // Swap only if i != j to avoid unnecessary swaps
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6, -7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    moveNegativesToLeft(arr, size);

    printf("After moving negatives to the left:\n");
    printArray(arr, size);

    return 0;
}
