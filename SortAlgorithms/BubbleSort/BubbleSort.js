
// Creates an Integer Array with 12 Elements
var arr = [2, 5, 2, 235, 2, 35, 2, 62, 51, 4, 2124, 2];

// Prints the Array before Sorting to the Console
// to better view changes between sorted and unsorted
console.log("Array before Sorting: " + arr);

// Sort Array
bubbleSort(arr);

// Prints the Sorted Array to the Console where you can
// check if the array is sorted
console.log("Array after Sorting: " + arr);

// Bubble Sort repeatedly steps through the list, 
// compares adjacent elements and swaps them if they are in the wrong order
function bubbleSort(arr) {
    // a boolean that shows if the Array is sorted or not
    var isSorted = false;
    // Sorts the Array until isSorted is true what means that 
    // the Array is sorted
    while (!isSorted) {
        // Sets isSorted to true (even if the array is not sorted)
        // to escape from the loop when it is sorted
        isSorted = true;
        // loops through the Array and compares adjacent elements
        for (let i = 0; i < arr.length; i++) {
            // Checks if the current Array Element is Bigger than the next 
            // Array Element.
            // if you want the Array from Biggest to Smallest just change
            // the > to an <.
            if (arr[i] > arr[i + 1]) {
                // Stores a's value in temp
                var temp = arr[i];
                // Sets the Element at a's position to the value in b's position
                arr[i] = arr[i + 1];
                // Sets the Element at a's position to the value of temp
                arr[i + 1] = temp;
                // sets isSorted to false because the Array is possibly not sorted
                isSorted = false;            
            }
        }
    }
}