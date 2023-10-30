#include "algorithm_prototypes.h" // Include the function prototype for quickSort.

#include <vector>

// Quick Sort is a popular divide-and-conquer sorting algorithm known for its efficiency.

// The partition function selects a 'pivot' element and reorders the elements
// so that elements smaller than the pivot are on the left, and elements greater
// than the pivot are on the right. It returns the index of the pivot element.

int partition(std::vector<int>& sequence, int low, int high) {
    int pivot = sequence[high]; // Select the pivot element as the last element.
    int i = (low - 1); // Initialize an index for the smaller element (initialized to one less than 'low').

    for (int j = low; j < high; j++) {
        if (sequence[j] <= pivot) { // Compare the current element with the pivot.
            i++; // Increment the index of the smaller element.
            std::swap(sequence[i], sequence[j]); // Swap elements to move the smaller element to the left.
        }
    }

    std::swap(sequence[i + 1], sequence[high]); // Swap the pivot element with the element at (i + 1) to place it in the correct position.
    return (i + 1); // Return the index of the pivot element.
}

// The quickSort function recursively sorts the given sequence.
void quickSort(std::vector<int>& sequence, int low, int high) {
    if (low < high) {
        int pi = partition(sequence, low, high); // Find the pivot index using the partition function.
        
        // Recursively sort elements before and after the pivot.
        quickSort(sequence, low, pi - 1); // Sort the elements to the left of the pivot.
        quickSort(sequence, pi + 1, high); // Sort the elements to the right of the pivot.
    }
}
