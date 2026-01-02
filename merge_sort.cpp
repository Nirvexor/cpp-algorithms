#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int leftIndex, int midIndex, int rightIndex){
    // Calculate the size of the temp arrays
    int n1 = midIndex - leftIndex + 1; // Size of Left Pile
    int n2 = rightIndex - midIndex; // Size of Right Pile

    // Create 2 temporary vectors 
    vector<int> LeftPile(n1);
    vector<int> RightPile(n2);

    // Fill the temp piles from the main array
    for (int i = 0; i < n1; i++){
        LeftPile[i] = arr[leftIndex + i];
    }

    for (int j = 0; j < n2; j++){
        RightPile[j] = arr[midIndex + 1 + j];
    }

    // Now we have two clean piles: LeftPile and RightPile.
    // The main 'arr' is now ready to be overwritten with the sorted result.

    // Inıtial indexes
    int i = 0;          // Index for the LeftPile
    int j = 0;          // Index for the RightPile
    int k = leftIndex;  // Index for the Main Array

    // The Zipper
    // Run as long as both piles have elements

    while (i < n1 && j < n2){

        if (LeftPile[i] <= RightPile[j]){
            arr[k] = LeftPile[i];
            i++; // Move to next card in LeftPile
        }
        else{
            arr[k] = RightPile[j];
            j++; // Move to next card in RightPile
        }
        k++; // Move to next slot in the main array
    }

    while (i < n1){
        arr[k] = LeftPile[i];
        i++;
        k++;
    }

    while (j < n2){
        arr[k] = RightPile[j];
        j++;
        k++;
    }

}
void merge_sort(vector<int>& arr, int leftSide, int rightSide){
    // Stop sign
    if (leftSide >= rightSide){
        return;
    }

    int mid = leftSide + (rightSide - leftSide) / 2;
    // Recursion
    merge_sort(arr, leftSide, mid);

    merge_sort(arr, mid + 1, rightSide);

    // The work
    merge(arr, leftSide, mid, rightSide);
}

// UTILITY: Print Array
void printArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = arr.size();

    cout << "Given array is \n";
    printArray(arr);

    merge_sort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr);
    return 0;
}