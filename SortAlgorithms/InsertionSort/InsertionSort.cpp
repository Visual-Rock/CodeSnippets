// Includes iostream (Input Output Stream)
// used methods: cout (for Printing to the Console), endl
#include <iostream>
// Includes Array utilities
// used methods: print_array
// used macros: ARR_LENGTH
#include "../cpputils.h"

// Defines the methode insertion_sort 
// to be useabel in main 
// alternatively you can put the methodes code above
// the main method 
template <class T>
void insertion_sort(T arr[], int length);

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
    insertion_sort(arr, ARR_LENGTH(arr));
    // Prints the Sorted Array to the Console where you can
    // check if the array is sorted
    std::cout << "Array after Sorting: "; print_array(arr, ARR_LENGTH(arr));
}

// Creates a template parameter T
template <class T>
// splits the array into a sorted and unsorted part
// then values from the unsorted array are picked 
// and placed at the correct position int the 
// sorted part
void insertion_sort(T arr[], int length)
{
    // The value of the current array Element
    T key;
    // index j
    int j;
    // goes through the array from the second element
    for (int i = 1; i < length; i++)
    {
        // asigns the value of the current element to key
        key = arr[i];
        // gets the last sorted array index
        j = i - 1;
        // sorts the Sorted array part to integrate
        // the new element by checking if the next 
        // element is bigger and if it is bigger 
        // it swaps them
        while (j >= 0 && arr[j] > key)
        {
            // moves the element one up
            arr[j + 1] = arr[j];
            // decrements j
            j--;
        }
        // asigns the key to the right position
        arr[j + 1] = key;
    }
}