// Includes iostream (Input Output Stream)
// used methods: cout (for Printing to the Console), endl
#include <iostream>

// it divids the memory size of the array
// by the size of one Element of the array
#define ARR_LENGTH(arr) sizeof(arr) / sizeof(arr[0])

// Creates a template parameter T
template <class T>
// Swaps two Array Element pointers
void swap(T* a, T* b)
{
    // Stores a pointer to a's value in t
    T t = *a;
    // asigns the value of b to a
    *a = *b;
    // asigns the value of t to b
    *b = t;
}

// Creates a template parameter T
template <class T>
// Prints an given Array to the Console
void printArray(T arr, int arrLength)
{
    // loops through all (exept the last) Array Elements
    // And Prints them to the Console
    for (int i = 0; i < arrLength - 1; i++)
    {
        // Prints the Current Array Element and a comma to Seperate Array Elements
        std::cout << arr[i] << ", ";
    }
    // Prints the last Element and a Line End
    std::cout << arr[arrLength - 1] << std::endl;
}