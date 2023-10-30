#include "algorithm_prototypes.h" // Include the function prototype for insertionSort.

#include <vector>

// Insertion Sort is a simple sorting algorithm that builds the final sorted sequence
// one item at a time. It is efficient for small datasets.

void insertionSort(std::vector<int>& sequence) {
    int n = sequence.size(); // Get the size of the input vector.

    for (int i = 1; i < n; i++) {
        int key = sequence[i]; // Select the current element to be inserted into the sorted part.
        int j = i - 1; // Initialize an index for the previous element.

        // Move elements of the sorted part that are greater than the key
        // to one position ahead of their current position.
        while (j >= 0 && sequence[j] > key) {
            sequence[j + 1] = sequence[j]; // Shift elements to the right.
            j--;
        }

        // Place the key element in its correct position in the sorted part.
        sequence[j + 1] = key;
    }

    // After the loop, the vector is sorted in ascending order.
}
