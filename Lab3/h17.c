 //Author: Happy
 //Input: int arr[], int n
 //Output: void
 //Description: Sorts an array using insertion sort
 //Others: None
 
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;

    // Traverse through 1 to n
    for (i = 1; i < n; i++) {
        key = arr[i];// Insert arr[i] into sorted sequence arr[0..i-1]
        j = i - 1;// Move elements of arr[0..i-1], that are greater than key

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];// Move element to one position ahead
            j = j - 1;// Move to the next element
        }
        arr[j + 1] = key;// Insert key at its correct position
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)// Traverse through the array
        printf("%d ", arr[i]);// Print each element
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};// Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);// Number of elements in the array

    insertionSort(arr, n);// Sort the array using insertion sort
    printf("Sorted array: \n");// Print the sorted array
    printArray(arr, n);// Print the sorted array

    return 0;
}

