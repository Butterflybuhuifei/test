//Author:Happy
//Inout:None
//Output:None
//Description:This program implements the selection sort 
//algorithm to sort an array of integers in ascending order.
//Others:None
#include <stdio.h>

//declare the function prototype
void selectionSort(int arr[], int n) {
    int i, j, min_idx;//declare the variables

    //elements one by one
    for (i = 0; i < n - 1; i++) {
        min_idx = i;

        //find the minimum element in unsorted array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        //find the minimum element in unsorted array
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};//declare the array
    int n = sizeof(arr) / sizeof(arr[0]);//declare the size of the array

    selectionSort(arr, n);// call the function
    printf("Sorted array: \n");//print the sorted array
    printArray(arr, n);// call the function

    return 0;
}
