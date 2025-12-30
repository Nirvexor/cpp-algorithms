#include <iostream>
using namespace std;

void bubble_sort (int arr[], int num) {
    for (int i = 0; i < num - 1; i++) {
        //Last i value are already in the place so we doN't need to sort the sorted value again.
        for (int j = 0; j < num - i - 1; j++) {
            // Swap if the value is found is greater than the next value.
            if (arr[j] > arr[j + 1]) {                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubble_sort(Numbers, size_of_the_array);

    // After the sort
    printArray(Numbers, size_of_the_array);
    
    return 0;
}