#include <stdio.h>

void insertionSort(int arr[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printf("Pass %d: ", i);  // Optional
        for (int k = 0; k < n; k++) 
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13, 5, 8, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    insertionSort(arr, n);
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}