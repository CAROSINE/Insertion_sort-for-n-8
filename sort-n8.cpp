#include <iostream>
using namespace std;

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
        cout << "Pass " << i << ": ";  // Optional
        for (int k = 0; k < n; k++) 
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 13, 5, 8, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    insertionSort(arr, n);
    cout << "Sorted Array: ";
    for (int num : arr) cout << num << " ";
    return 0;
}