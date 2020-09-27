import java.util.Arrays;

class Program {
    // The Main entry point of the Application
    public static void main(String[] args) {
        // Creates an Integer Array with 12 Elements
        int[] arr = { 2, 5, 2, 235, 2, 35, 2, 62, 51, 4, 2124, 2 };
        // Prints the Array before Sorting to the Console
        // to better view changes between sorted and unsorted
        System.out.println("Array before Sorting: " + Arrays.toString(arr));
        // Calls the bubbleSort method and sorts the passed array
        SelectionSort(arr);
        // Prints the Sorted Array to the Console where you can
        // check if the array is sorted
        System.out.println("Array after Sorting: " + Arrays.toString(arr));
    }

    // sorts an array by repeatedly finding the minimum element 
    // (considering ascending order) from unsorted part and
    // putting it at the beginning
    public static void SelectionSort(int[] arr) {
        // Index of the Smallest Element of the Unsorted Array
        int min_idx;
        // loops through the Array
        for (int i = 0; i < arr.Length - 1; i++) {
            // Sets the minimum index to the first Element
            // of the Unsorted Array
            min_idx = i;
            // Find the minimum element in unsorted array by
            // looping through the Array and comparis them to
            // the current lowest Element
            for (int j = i + 1; j < arr.Length; j++) {
                // Checks if the current Array Element is Smaller than
                // the Smallest Array Element.
                if (arr[j] < arr[min_idx]) {
                    // When a Smaller Element is found
                    // Sets the Current Smallest Element
                    // to the new Smallest Element
                    min_idx = j;
                }
                // Swaps the smallest Array Element with
                // the first Position of the Unsorted Array
                Swap(arr, i, min_idx);
            }
        }
    }

    // Swaps two Elements in a given Array
    public static void swap(int[] arr, int a, int b) {
        // Stores a's value in t
        int t = arr[a];
        // Sets the Element at a's position to the value in b's position
        arr[a] = arr[b];
        // Sets the Element at a's position to the value of t
        arr[b] = t;
    }
}