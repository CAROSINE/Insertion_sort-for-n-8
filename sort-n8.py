def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):  # Start from the 2nd element
        key = arr[i]        # Element to insert
        j = i - 1
        # Shift elements > key to the right
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key    # Insert key in correct position
        print(f"Pass {i}: {arr}")  # Optional: Show each pass

# Example usage
arr = [29, 10, 14, 37, 13, 5, 8, 16]
print("Original Array:", arr)
insertion_sort(arr)
print("Sorted Array:", arr)