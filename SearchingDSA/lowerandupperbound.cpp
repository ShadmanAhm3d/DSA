
// Competitive Programming Setup
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// lower bound
/* int bs(int arr[], int n, int target) {

  int l = 0;
  int h = n - 1;
  int ans = n - 1;

  while (l < h) {
    int m = (h + l) / 2;
    if (arr[m] >= target) {
      h = m - 1;
      ans = m;
    } else if (arr[m] < target) {
      l = m + 1;
    }
  }

  return ans;
} */

// upper bound
int bs(int arr[], int n, int target) {

  int l = 0;
  int h = n - 1;
  int ans = n - 1;

  while (l <= h) {
    int m = (h + l) / 2;
    if (arr[m] > target) {
      h = m - 1;
    } else if (arr[m] <= target) {
      l = m + 1;
      ans = m;
    }
  }

  return ans;
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " | ";
  cout << endl;
}

int main() {

  int arr[] = {1, 2, 3, 3, 7, 8, 8, 9, 9, 9, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 9;
  cout << "Original Array: ";
  printArray(arr, n);
  cout << endl << "The size of array " << n << endl;
  cout << bs(arr, n, x) << endl;

  cout << "Updated Array: ";
  printArray(arr, n);

  return 0;
}
