#ifndef algorithm_prototypes_h
#define algorithm_prototypes_h

#include <vector>

// Function prototypes for sorting algorithms

// Selection Sort: Sorts a vector by repeatedly selecting the minimum element and moving it to the beginning.
void selectionSort(std::vector<int>& sequence);

// Bubble Sort: Sorts a vector by repeatedly comparing and swapping adjacent elements if they are out of order.
void bubbleSort(std::vector<int>& sequence);

// Quick Sort: Sorts a vector using a divide-and-conquer approach, recursively partitioning and sorting subarrays.
void quickSort(std::vector<int>& sequence, int low, int high);

// Insertion Sort: Sorts a vector by building the final sorted sequence one element at a time.
void insertionSort(std::vector<int>& sequence);

// Merge Sort: Sorts a vector using a divide-and-conquer approach, recursively dividing and merging subarrays.
void mergeSort(std::vector<int>& sequence, int left, int right);

#endif
