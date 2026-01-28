#include <stdio.h>
#include <stdlib.h>

// Global counter for recursive calls
int callCount = 0;

// Function 
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    i = 0; 
    j = 0; 
    k = left;

    while (i < n1 && j<n2){
        if (leftArr[i] <= rightArr[j]){
            arr[k++] = leftArr[i++];
        }
        else{
            arr[k++] = rightArr[j++];
        }                                                       
    }
    {
        /* code */
        
    }
    