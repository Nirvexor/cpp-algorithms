#include <iostream>
using namespace std;

int binary_search (int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Calculate the mid.
        int midIndex = (low + high) / 2;
        
        // Compare the values
        if (arr[midIndex] == target) {
            return midIndex; // Target Found
        }
        else if (target > arr[midIndex]) {
            low = midIndex + 1; // Search right half
        }
        else{
            high = midIndex - 1; // Search left half
        }
    }
    return -1; //Not found
}

int main() {
    // Must be sorted to work 
    // Can be implemented with sorting algorithms first
    int Numbers[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size_of_the_array = 10;

    // Test 1: Find 23 (Should be index 5)
    int target = 23;

    int result = binary_search(Numbers, size_of_the_array, target);

    if (result != -1) {
        cout << "Found " << target << " at index " << result << endl;
    }
    else {
        cout << target << " not found." << endl;
    }

    return 0;
}