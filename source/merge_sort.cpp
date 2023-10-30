#include "algorithm_prototypes.h" // Include the function prototypes for mergeSort.

#include <vector>

// Merge Sort is a divide-and-conquer sorting algorithm.
// It splits the input array into two halves, sorts each half separately, 
// and then merges the sorted halves back together.

// The merge function combines two sorted subarrays into a single sorted array.
void merge(std::vector<int>& sequence, int left, int middle, int right) {
    // Calculate the sizes of the two subarrays.
    int n1 = middle - left + 1; // Size of the left subarray.
    int n2 = right - middle;    // Size of the right subarray.

    // Create temporary arrays to hold the subarrays.
    std::vector<int> leftArray(n1);
    std::vector<int> rightArray(n2);

    // Copy data from the original array to the temporary left and right arrays.
    for (int i = 0; i < n1; i++) {
        leftArray[i] = sequence[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArray[j] = sequence[middle + 1 + j];
    }

    // Merge the two subarrays back into the original array.
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            sequence[k] = leftArray[i];
            i++;
        } else {
            sequence[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from the left and right subarrays, if any.
    while (i < n1) {
        sequence[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2) {
        sequence[k] = rightArray[j];
        j++;
        k++;
    }
}

// The mergeSort function recursively divides the array into halves
// and then calls the merge function to merge them back together.
void mergeSort(std::vector<int>& sequence, int left, int right) {
    if (left < right) {
        // Calculate the middle of the current array.
        int middle = left + (right - left) / 2;

        // Recursively sort the left and right halves.
        mergeSort(sequence, left, middle);
        mergeSort(sequence, middle + 1, right);

        // Merge the sorted halves back together.
        merge(sequence, left, middle, right);
    }
}
