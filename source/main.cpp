#include <iostream>
#include <algorithm>
#include "algorithm_prototypes.h"
#include <vector> // Include the necessary libraries, including vector.

using namespace std;

// Function to print a sequence of numbers.
void printSequence(const std::vector<int>& sequence) {
    for (int num : sequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    vector<int> sequence; // Use a vector to store the input sequence.

    cout << "Enter the number of elements: ";
    int n;
    cin >> n; // Read the number of elements to sort.

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sequence.push_back(num); // Add elements to the vector.
    }

    // Create copies of the input sequence for each sorting algorithm.
    vector<int> bubbleSorted = sequence;
    vector<int> quickSorted = sequence;
    vector<int> selectionSorted = sequence;
    vector<int> insertionSorted = sequence;
    vector<int> mergeSorted = sequence;

    // Sort the sequences using different sorting algorithms.

    // Bubble Sort
    bubbleSort(bubbleSorted);

    // Quick Sort
    quickSort(quickSorted, 0, quickSorted.size() - 1);

    // Selection Sort
    selectionSort(selectionSorted);

    // Insertion Sort
    insertionSort(insertionSorted);

    // Merge Sort
    mergeSort(mergeSorted, 0, mergeSorted.size() - 1);

    // Print the sorted sequences for each sorting algorithm.
    cout << "Bubble Sort: ";
    printSequence(bubbleSorted);

    cout << "Quick Sort: ";
    printSequence(quickSorted);

    cout << "Selection Sort: ";
    printSequence(selectionSorted);

    cout << "Insertion Sort: ";
    printSequence(insertionSorted);

    cout << "Merge Sort: ";
    printSequence(mergeSorted);

    return 0; // Return 0 to indicate successful execution of the program.
}
