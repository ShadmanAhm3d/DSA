
#include <bits/stdc++.h>
using namespace std;

int insertion(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
  return 0;
}

// Function to print an array
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program to test above functions
int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertion(arr, n);
  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}
