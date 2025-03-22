//Author: Happy
//Input: integer array
//Output: Sorted array  
//Description: This program sorts an integer array using 
//the bubble sort algorithm
//Others: None
#include <stdio.h>

//Bubble sort 
void bubbleSort(int arr[], int n) {
    int i, j;//Loop variables
    //Loop through the array
    for (i = 0; i < n - 1; i++) {
        //Loop through the array again, but this time only up to n-i-1
        for (j = 0; j < n - i - 1; j++) {
            //If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                //Exchange arr[j] and arr[j+1]
                int temp = arr[j];
                //arr[j] = arr[j + 1];
                arr[j] = arr[j + 1];
                //arr[j + 1] = arr[j];
                arr[j + 1] = temp;
                //arr[j + 1] = temp;
            }
        }
    }
}

//print the array
void printArray(int arr[], int size) {
    int i;//Loop variable
    //Loop through the array
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);//Print the current element
    printf("\n");//Print a new line
}

int main() {
    //Declare an array of integers
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    //Declare a variable to store the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    //Call the bubbleSort function
    bubbleSort(arr, n);
    //Print the sorted array
    printf("Sorted array: \n");
    //Call the printArray function
    printArray(arr, n);
    //Return 0 to indicate successful execution
    return 0;
}