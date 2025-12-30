# C++ Algorithms

A collection of fundamental computer science algorithms implemented in C++.
This repository serves as a reference for standard sorting and searching logic, implemented without reliance on internal library sorting functions to demonstrate understanding of the underlying mechanics.

## Overview

The goal of this project is to provide clean, modular implementations of core algorithms. Each algorithm is encapsulated in its own function to separate logic from execution.

## Implemented Algorithms

### 1. Bubble Sort
* **File:** `bubble_sort.cpp`
* **Time Complexity:** O(n^2)
* **Description:** A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### 2. Selection Sort
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
## Future Roadmap
* Insersion Sort
* Binary Search Implemention
* Merge Sort

## Author
Nirvexor