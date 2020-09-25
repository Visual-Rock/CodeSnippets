#include <stdio.h>
#include <stdbool.h>

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

void bubbleSort(int arr[], int length)
{
    // a boolean that shows if the Array is sorted or not
    bool isSorted = 0;
    // Sets isSorted to true (even if the array is not sorted)
    // to escape from the loop when it is sorted
    while (!isSorted)
    {
        // Sets isSorted to true (even if the array is not sorted)
        // to escape from the loop when it is sorted
        isSorted = true;
        // loops through the Array and compares adjacent elements 
        for (int i = 0; i < length - 1; i++)
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
                isSorted = false;
            }
        }
    }
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
    bubbleSort(arr, arrLength);
    // Prints the Sorted Array to the Console where you can
    // check if the array is sorted
    printf("Array after Sorting: ");  printArray(arr, arrLength);
}