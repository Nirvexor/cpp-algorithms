# C++ Algorithms

A collection of fundamental computer science algorithms implemented in C++.
This repository serves as a reference for standard sorting and searching logic, implemented without reliance on internal library sorting functions to demonstrate understanding of the underlying mechanics.

## Overview

The goal of this project is to provide clean, modular implementations of core algorithms. Each algorithm is encapsulated in its own function to separate logic from execution.

## Implemented Algorithms

### 1. Binary Search
* **File:** `binary_search.cpp`
* **Time Complexity:** O(log n)
* **Description:** An efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing in half the portion of the list that could contain the item, until you've narrowed down the possible locations to just one.

### 2. Bubble Sort
* **File:** `bubble_sort.cpp`
* **Time Complexity:** O(n^2)
* **Description:** A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### 3. Insertion Sort
* **File:** `insertion_sort.cpp`
* **Time Complexity:** O(n^2)
* **Description:** Builds the final sorted array (or list) one item at a time. It assumes the first element is already sorted, then picks the next element and places it into the correct position relative to the sorted portion. Efficient for small data sets or nearly sorted lists.

### 4. Selection Sort
* **File:** `selection_sort.cpp`
* **Time Complexity:** O(n^2)
* **Description:** An in-place comparison sort. It divides the input list into two parts: the sublist of items already sorted and the sublist of items remaining to be sorted. It repeatedly finds the minimum element from the unsorted sublist and moves it to the beginning.

## How to Compile and Run

You can compile these files using any standard C++ compiler (like g++).

**Example for Bubble Sort:**

```bash
g++ bubble_sort.cpp -o bubble
./bubble
```

**Example for Insertion Sort:**
```bash
g++ insertion_sort.cpp -o insertion
./insertion
```

**Example for Selection Sort:**
```bash
g++ selection_sort.cpp -o selection
./selection
```

**Example for Binary Search:**

```bash
g++ binary_search.cpp -o binary
./binary
```


## Future Roadmap
* Merge Sort (Divide and Conquer)
* Quick Sort
* Linear Search (for performance comparison)
* Jump Search

## Author
Nirvexor