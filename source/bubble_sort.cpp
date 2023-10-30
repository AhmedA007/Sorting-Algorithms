#include "algorithm_prototypes.h" // Include the function prototype for bubbleSort.

#include <vector>

// Bubble Sort is a simple sorting algorithm that repeatedly steps through the list,
// compares adjacent elements, and swaps them if they are in the wrong order.

void bubbleSort(std::vector<int>& sequence) {
    int n = sequence.size(); // Get the size of the input vector.

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) { // Compare and swap adjacent elements.
            if (sequence[j] > sequence[j + 1]) { // Check if the current element is greater than the next.
                std::swap(sequence[j], sequence[j + 1]); // Swap elements if they are in the wrong order.
            }
        }
    }

    // After the loop, the vector is sorted in ascending order.
}
