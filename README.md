# Sorting Algorithms

This repository contains implementations of various sorting algorithms in C++ to demonstrate proficiency in fundamental algorithms and data structures.

## Table of Contents

- [Sorting Algorithms](#sorting-algorithms)
  - [Table of Contents](#table-of-contents)
  - [Project Structure](#project-structure)
  - [Usage](#usage)
  - [File Structure](#file-structure)
  - [Authors](#authors)

1. **Bubble Sort**: A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
a
2. **Quick Sort**: A divide-and-conquer sorting algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.

3. **Selection Sort**: A simple sorting algorithm that repeatedly selects the minimum element from the unsorted part of the array and moves it to the beginning of the sorted part.

4. **Insertion Sort**: A simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms.

5. **Merge Sort**: A divide-and-conquer sorting algorithm that divides the input array into two halves, sorts each half separately, and then merges the sorted halves back together.

## Project Structure

- [algorithm_prototypes.h](headers/algorithm_prototypes.h): Header file containing function prototypes for the sorting algorithms.
 
- [main.cpp](source/main.cpp): The main program that allows users to input sequences and see the results of sorting algorithms.
  
- [bubble_sort.cpp](source/bubble_sort.cpp): Implementation of the Bubble Sort algorithm.
    A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

- [quick_sort.cpp](source/quick_sort.cpp): Implementation of the Quick Sort algorithm.
    A divide-and-conquer sorting algorithm that works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot.

- [selection_sort.cpp](source/selection_sort.cpp): Implementation of the Selection Sort algorithm.
    A simple sorting algorithm that repeatedly selects the minimum element from the unsorted part of the array and moves it to the beginning of the sorted part.

- [insertion_sort.cpp](source/insertion_sort.cpp): Implementation of the Insertion Sort algorithm.
    A simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms.

- [merge_sort.cpp](source/merge_sort.cpp): Implementation of the Merge Sort algorithm.
    A divide-and-conquer sorting algorithm that divides the input array into two halves, sorts each half separately, and then merges the sorted halves back together.

## Usage

1. Clone the repository
2. Compile and run the program using a C++ compiler.
3. Follow the prompts to input the number of elements and the elements themselves.
4. The program will demonstrate each sorting algorithm and display the sorted sequences.

## File Structure

The repository is organized as follows:

- **main.cpp**: The main program that showcases sorting algorithms.
- **algorithm_prototypes.h**: Header file containing function prototypes for the sorting algorithms.
- **Algorithm-specific .cpp files**: Each sorting algorithm has its own .cpp file for easy reference.

## Authors

* **Ahmed Amir** - *Comp Sci Student* - [Ahmed Amir](https://github.com/AhmedA007/) 
