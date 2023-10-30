#include "algorithm_prototypes.h" // Include the function prototype for selectionSort.

#include <vector>

// Selection Sort is a simple and intuitive sorting algorithm.

// The selectionSort function sorts an input sequence by repeatedly selecting the
// minimum element from the unsorted part of the sequence and moving it to the
// beginning of the sorted part.

void selectionSort(std::vector<int>& sequence) {
    int n = sequence.size(); // Get the size of the input vector.

    for (int i = 0; i < n - 1; i++) { // Iterate through the entire vector, excluding the last element.
        int minIndex = i; // Assume the current index has the minimum value.

        // Find the index of the minimum element in the unsorted part of the vector.
        for (int j = i + 1; j < n; j++) {
            if (sequence[j] < sequence[minIndex]) {
                minIndex = j;
            }
        }

        // If the minimum element is not at the current position (i), swap them.
        if (minIndex != i) {
            std::swap(sequence[i], sequence[minIndex]);
        }
    }

    // After the loop, the vector is sorted in ascending order.
}
