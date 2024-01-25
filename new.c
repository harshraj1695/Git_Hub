#include <stdio.h>

// Function to partition the array and return the index of the pivot
int partition(int arr[], int l, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = l; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i+1] and arr[high] (place pivot at its correct position)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Function to perform Quick Sort recursively
void quickSort(int arr[], int l, int high) {
    if (l < high) {
        // Find the partitioning index
        int pivotIndex = partition(arr, l, high);

        // Recursively sort the subarrays
        quickSort(arr, l, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Example usage
int main() {
    int myArray[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original Array: ");
    printArray(myArray, arraySize);

    // Perform Quick Sort
    quickSort(myArray, 0, arraySize - 1);

    printf("Sorted Array: ");
    printArray(myArray, arraySize);

    return 0;
}

