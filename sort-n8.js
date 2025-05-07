function insertionSort(arr) {
    const n = arr.length;
    
    for (let i = 1; i < n; i++) {
        // Current element to be inserted
        const key = arr[i];
        let j = i - 1;

        // Shift elements of arr[0..i-1] that are > key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; // Insert key in its correct position
    }
    return arr; // Return the sorted array
}

// Example Usage
const array = [29, 10, 14, 37, 13, 5, 8, 16];
console.log("Original Array:", array);
const sortedArray = insertionSort(array);
console.log("Sorted Array:", sortedArray);