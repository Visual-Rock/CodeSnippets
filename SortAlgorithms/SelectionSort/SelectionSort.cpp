// Includes iostream (Input Output Stream)
// used methods: cout (for Printing to the Console), endl
#include <iostream>
// Includes Array utilities
// used methods: swap, printArray
// used macros: ARR_LENGTH
#include "../cpputils.h"

// Defines the methode selectionSort 
// to be useabel in main 
// alternatively you can put the methodes code above
// the main method 
template <class T>
void selection_sort(T arr, int arrLength);

// The Main entry point of the Application
int main() 
{
    // Creates an Integer Array with 12 Elements
    int arr[] = { 2, 5, 2 , 235, 2, 35, 2, 62, 51, 4, 2124, 2 };
    // Prints the Array before Sorting to the Console
    // to better view changes between sorted and unsorted
    std::cout << "Array before Sorting: "; print_array(arr, ARR_LENGTH(arr));
    // Calls the bubbleSort method and sorts the passed array 
    // the array length is calculated like this:
    // sizeof(arr) / sizeof(arr[0])
    // all it does is dividing the memory size of the array
    // by the size of one Element of the array
    selection_sort(arr, ARR_LENGTH(arr));
    // Prints the Sorted Array to the Console where you can
    // check if the array is sorted
    std::cout << "Array after Sorting: "; print_array(arr, ARR_LENGTH(arr));
}

// Creates a template parameter T
template <class T>
// sorts an array by repeatedly finding the minimum element 
// (considering ascending order) from unsorted part and
// putting it at the beginning
// Source: https://www.geeksforgeeks.org/selection-sort/
void selection_sort(T arr, int arr_length)
{
    // Index of the Smallest Element of the Unsorted Array
    int min_idx;
    // loops through the Array
    for (int i = 0; i < arr_length - 1; i++)
    {
        // Sets the minimum index to the first Element 
        // of the Unsorted Array
        min_idx = i;
        // Find the minimum element in unsorted array by
        // looping through the Array and comparis them to 
        // the current lowest Element
        for (int j = i + 1; j < arr_length; j++)
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