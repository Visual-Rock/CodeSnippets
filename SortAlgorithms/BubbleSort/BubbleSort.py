# Bubble Sort repeatedly steps through the list, 
# compares adjacent elements and swaps them if they are in the wrong order
def BubbleSort(arr):
    # a boolean that shows if the Array is sorted or not
    IsSorted = False
    # Sorts the Array until isSorted is true what means that 
    # the Array is sorted
    while (IsSorted != True):
        # Sets isSorted to true (even if the array is not sorted)
        # to escape from the loop when it is sorted
        IsSorted = True
        # current Array Position
        i = 0
        # loops through the Array and compares adjacent elements
        while i < len(arr) - 1:
            # Checks if the current Array Element is Bigger than the next 
            # Array Element.
            # if you want the Array from Biggest to Smallest just change
            # the > to an <.
            if arr[i] > arr[i + 1]:
                # Stores a's value in temp
                temp = arr[i]
                # Sets the Element at a's position to the value in b's position
                arr[i] = arr[i + 1]
                # Sets the Element at a's position to the value of temp
                arr[i + 1] = temp
                # sets isSorted to false because the Array is possibly not sorted
                IsSorted = False
            # Increments i
            i += 1

# Bubble Sort repeatedly steps through the list, 
# compares adjacent elements and swaps them if they are in the wrong order
# Ignores all Sorted Elements
def BubbleSortOptimized(arr):
    # current Array Position
    i = len(arr) - 1
    # loops through the Array and splits sorted and unsorted Array
    while i != 0:
        # Current Position in the unsorted Array
        j = 0
        # loops through the unsorted Array to sort it
        while j < i:
            # Checks if the current Array Element is Bigger than the next 
            # Array Element.
            # if you want the Array from Biggest to Smallest just change
            # the > to an <.
            if arr[j] > arr[j + 1]:
                # Stores a's value in temp
                temp = arr[j]
                # Sets the Element at a's position to the value in b's position
                arr[j] = arr[j + 1]
                # Sets the Element at a's position to the value of temp
                arr[j + 1] = temp
            # Increments j
            j += 1
        # decrements i
        i -= 1


def main():
    # Creates an Integer Array with 12 Elements
    arr = [ 2, 5, 2 , 235, 2, 35, 2, 62, 51, 4, 2124, 2 ]
    # Prints the Array before Sorting to the Console
    # to better view changes between sorted and unsorted
    print("Array before Sorting: ", arr)
    # Calls the bubbleSort method and sorts the passed array
    BubbleSort(arr)
    # Prints the Sorted Array to the Console where you can
    # check if the array is sorted
    print("Array after Sorting: ", arr)

# Calls Main method
if __name__ == '__main__':
    main()
