#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

void mergesortt(int arr1[], int arr2[], int n, int m) {

  int i = 0, j = 0;
  while (i < n && j < m) {

    if (i > 0 && arr1[i] == arr1[i - 1]) {
      i++;
      continue;
    }

    if (arr1[i] < arr2[j]) {
      i++;

    } else if (arr1[i] > arr2[j]) {
      j++;
    } else {
      cout << arr1[i] << " ";
      i++;
      j++;
    }
  }
}
// Driver program to test above functions
int main() {
  int arr1[] = {1, 2, 3};
  int arr2[] = {2, 3, 4};

  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);
  mergesortt(arr1, arr2, n, m);
  // cout << "Sorted array: \n";
  // printArray(arr, n);
  return 0;
}
