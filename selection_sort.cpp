#include <iostream>
using namespace std;

void selection_sort(int arr[],int num) {
    for(int i = 0; i < num -1; i++) {
        //We assume the first one is the smallest one.
        int minIndex = i;

        for (int j = i + 1; j < num ; j++) {
            // Simply we are changing target here to find the smallest number in the array.
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // change the target and save as minIndex.
            }
        }
        // Now we found the smallest target it is time to change them.
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printArray (int arrayPrint[], int size) {
    for(int x = 0; x < size; x++) {
        cout << arrayPrint[x] << " ";
    }
    cout << endl;
}

int main() {
    int arrNumbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size_of_the_array = 7;

    // Before the sort
    printArray(arrNumbers, size_of_the_array);

    selection_sort(arrNumbers, size_of_the_array);

    // After the sort
    printArray(arrNumbers, size_of_the_array);

    return 0;
}