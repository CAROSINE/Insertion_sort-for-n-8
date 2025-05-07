public class InsertionSort 
{
    public static void insertionSort(int[] arr) 
    {
        int n = arr.length;
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
            System.out.print("Pass " + i + ": ");  // Optional
            printArray(arr);
        }
    }

    public static void printArray(int[] arr) 
    {
        for (int num : arr) 
        {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) 
    {
        int[] arr = {29, 10, 14, 37, 13, 5, 8, 16};
        System.out.print("Original Array: ");
        printArray(arr);
        insertionSort(arr);
        System.out.print("Sorted Array: ");
        printArray(arr);
    }
}