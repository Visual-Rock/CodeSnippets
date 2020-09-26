#include <stdio.h>

// Swaps two Array Element pointers
void swap(int* a, int* b)
{
    // Stores a pointer to a's value in temp
    int temp = *a;
    // asigns the value of b to a
    *a = *b;
    // asigns the value of t to b
    *b = temp;
}

// method to print Array
void printArray(int arr[], int size)
{
    // loops through all (exept the last) Array Elements
    // And Prints them to the Console
    for (int i = 0; i < size - 1; i++)
        // Prints the Current Array Element and a comma to Seperate Array Elements
        printf("%d, ", arr[i]);
    // Prints the last Element and a Line End
    printf("%d \n", arr[size - 1]);
    // 55
    //printf("\n");
}

// sorts an array by repeatedly finding the minimum element 
// (considering ascending order) from unsorted part and
// putting it at the beginning
// Source: https://www.geeksforgeeks.org/selection-sort/
void selectionSort(int arr[], int size)
{
    // Index of the Smallest Element of the Unsorted Array
    int min_idx;
    // loops through the Array
    for (int i = 0; i < size - 1; i++)
    {
        // Sets the minimum index to the first Element 
        // of the Unsorted Array
        min_idx = i;
        // Find the minimum element in unsorted array by
        // looping through the Array and comparis them to 
        // the current lowest Element
        for (int j = i + 1; j < size; j++)
        {
            // Checks if the current Array Element is Smaller than  
            // the Smallest Array Element.
            if (arr[j] < arr[min_idx])
            {
                // When a Smaller Element is found 
                // Sets the Current Smallest Element
                // to the new Smallest Element
                min_idx = j;
            }
            // Swaps the smallest Array Element with 
            // the first Position of the Unsorted Array
            swap(&arr[min_idx], &arr[i]);
        }
    }
}

// The Main entry point of the Application
int main(int argc, char* argv[]) {
    // Creates an Integer Array with 12 Elements
    int arr[] = { 2, 5, 2 , 235, 2, 35, 2, 62, 51, 4, 2124, 2 };
    // it divids the memory size of the array
    // by the size of one Element of the array
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    // Prints the Array before Sorting to the Console
    // to better view changes between sorted and unsorted
    printf("Array before Sorting: ");  printArray(arr, arrLength);
    // Calls the bubbleSort method and sorts the passed array and array length
    selectionSort(arr, arrLength);
    // Prints the Sorted Array to the Console where you can
    // check if the array is sorted
    printf("Array after Sorting: ");  printArray(arr, arrLength);
}