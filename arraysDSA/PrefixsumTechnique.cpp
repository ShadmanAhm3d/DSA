#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int PS(int arr[], int n) {

  for (int i = 1; i < n; i++) {
    arr[i] += arr[i - 1];
  }
  return -1;
}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " | ";
  cout << endl;
}

int main() {
  int arr[] = {2, 8, 3, 9, 6, 5, 4};
  int k = 4;
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Number of Elements Processed in the array: " << n << endl;

  // vector<int> flippedIndexes = solve(arr, n);
  // cout << "Flipped Indexes: ";
  // for (int i = 0; i < flippedIndexes.size(); i++) {
  //   cout << flippedIndexes[i] << " ";
  // }
  // cout << endl;

  cout << "Orignal Array: ";
  printArray(arr, n);
  PS(arr, n);
  cout << "Updated Array: ";
  printArray(arr, n);

  return 0;
}

