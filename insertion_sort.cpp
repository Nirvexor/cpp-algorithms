#include <iostream>
using namespace std;

void insertion_sort (int arr[], int num) {
    for (int i = 1; i < num; i++) {
        int key = arr[i]; // Save the current element (will be owerwritten)
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Copy arr[j] to the right (duplicates it)
            j--;
        }

        // Overwrite the leftmost duplicate with the key
        arr[j + 1] = key;
    }
}

void printArray (int arrayPrint[], int size) {
    for(int x = 0; x < size; x++) {
        cout << arrayPrint[x] << " ";
    }
    cout << endl;
}

int main() {
    int Numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size_of_the_array = 7;

    // Before the sort
    printArray(Numbers, size_of_the_array);

    insertion_sort(Numbers, size_of_the_array);

    // After the sort
    printArray(Numbers, size_of_the_array);
    
    return 0;
}