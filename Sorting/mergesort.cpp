#include <iostream>
using namespace std;

// Merge function: Merges two sorted halves of arr[]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;  // Size of left half
    int n2 = r - m;      // Size of right half

    int L[n1], R[n2];    // Temporary arrays

    // Copying data into Left Subarray
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }

    // Copying data into Right Subarray
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }

    int i = 0, j = 0, k = l;  // Initial indexes

    // Merging L[] and R[] into arr[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;  // Base case

    int m = l + (r - l) / 2;  // Middle index

    mergeSort(arr, l, m);      // Sort first half
    mergeSort(arr, m + 1, r);  // Sort second half

    merge(arr, l, m, r);  // Merge the sorted halves
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver Function
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);  // Sorting the array

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}

