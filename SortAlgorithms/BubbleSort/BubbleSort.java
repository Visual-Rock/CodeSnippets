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
        bubbleSort(arr);
        // Prints the Sorted Array to the Console where you can
        // check if the array is sorted
        System.out.println("Array after Sorting: " + Arrays.toString(arr));
    }

    // Bubble Sort repeatedly steps through the list, 
    // compares adjacent elements and swaps them if they are in the wrong order
    public static void bubbleSort(int[] arr) {
        // a boolean that shows if the Array is sorted or not
        boolean IsSorted = false;
        // Sorts the Array until isSorted is true what means that 
        // the Array is sorted
        while (!IsSorted)
        {
            // Sets isSorted to true (even if the array is not sorted)
            // to escape from the loop when it is sorted
            IsSorted = true;
            // loops through the Array and compares adjacent elements 
            for (int i = 0; i < arr.length - 1; i++)
            {
                // Checks if the current Array Element is Bigger than the next 
                // Array Element.
                // if you want the Array from Biggest to Smallest just change
                // the > to an <.
                if (arr[i] > arr[i + 1])
                {
                    // swaps the Current Array Element and the
                    // next Array Element because ther are out of order
                    swap(arr, i, i + 1);
                    // sets isSorted to false because the Array is possibly not sorted
                    IsSorted = false;
                }
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