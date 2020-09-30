// Includes iostream (Input Output Stream)
// used methods: cout (for Printing to the Console), endl
#include <iostream>
// Includes Array utilities
// used methods: swap, print_array
// used macros: ARR_LENGTH
#include "../cpputils.h"

// Defines the methode bubbleSort 
// to be useabel in main 
// alternatively you can put the methodes code above
// the main method 
template <class T>
void bubble_sort(T arr, int arr_length);
template <class T>
void bubble_sort_optimized(T arr, int arr_length);

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
    bubble_sort(arr, ARR_LENGTH(arr));
    // Prints the Sorted Array to the Console where you can
    // check if the array is sorted
    std::cout << "Array after Sorting: "; print_array(arr, ARR_LENGTH(arr));
}

// Creates a template parameter T
template <class T>
// Bubble Sort repeatedly steps through the list, 
// compares adjacent elements and swaps them if they are in the wrong order
void bubble_sort(T arr, int arr_length)
{
    // a boolean that shows if the Array is sorted or not
    bool is_sorted = false;
    // Sorts the Array until isSorted is true what means that 
    // the Array is sorted
    while (!is_sorted)
    {
        // Sets isSorted to true (even if the array is not sorted)
        // to escape from the loop when it is sorted
        is_sorted = true;
        // loops through the Array and compares adjacent elements 
        for (int i = 0; i < arr_length - 1; i++)
        {
            // Checks if the current Array Element is Bigger than the next 
            // Array Element.
            // if you want the Array from Biggest to Smallest just change
            // the > to an <.
            if (arr[i] > arr[i + 1])
            {
                // swaps the Current Array Element and the
                // next Array Element because ther are out of order
                swap(&arr[i], &arr[i + 1]);
                // sets isSorted to false because the Array is possibly not sorted
                is_sorted = false;
            }
        }
    }
}

// Creates a template parameter T
template <class T>
// Bubble Sort repeatedly steps through the list, 
// compares adjacent elements and swaps them if they are in the wrong order
// Ignores all Sorted Elements
void bubble_sort_optimized(T arr, int arr_length)
{
    // loops through the Array and splits sorted and unsorted Array
    for (int i = arr_length; i != 0; i--)
    {
        // loops through the unsorted Array to sort it 
        for (int j = 0; j < i; j++)
        {
            // Checks if the current Array Element is Bigger than the next 
            // Array Element.
            // if you want the Array from Biggest to Smallest just change
            // the > to an <.
            if (arr[j] > arr[j + 1])
            {
                // swaps the Current Array Element and the
                // next Array Element because ther are out of order
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}