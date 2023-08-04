
//use upper bound and lower bound to find first and last occurrence of an element
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int lowerBound(int arr[], int n, int x) {
  int low = 0;
  int high = n - 1;
  int ans = n ;
  while (low <= high) {
    int mid = (high + low) / 2;
    if (arr[mid] >= x) {
      high = mid - 1;
      ans = mid;
    } else {
      low = mid + 1;
    }
  }
  if (arr[ans] != x)
    return -1;
  else
    return ans;
}

int UpperBound(int arr[], int n, int x) {
  int low = 0;
  int high = n - 1;
  int ans = n ;
  while (low <= high) {
    int m = (high + low) / 2;
    if (arr[m] > x) {
      high = m - 1;
    } else if (arr[m] <= x) {
      low = m + 1;
      ans = m;
    }
  }
  if (arr[ans] != x)
    return -1;
  else
    return ans;
}

vector<int> bs(int arr[], int n, int x) {
  int lb = lowerBound(arr, n, x);
  int ub = UpperBound(arr, n, x);
  if (lb == -1 || arr[lb] != x)
    return {-1, -1};
  return {lb, ub};
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " | ";
  cout << endl;
}

int main() {
  int arr[] = {1, 3, 5, 5, 5, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 5;
  cout << "Original Array: ";
  printArray(arr, n);
  cout << endl << "The size of array " << n << endl;
  vector<int> result = bs(arr, n, x);
  cout << "First occurrence index: " << result[0] << endl;
  cout << "Last occurrence index: " << result[1] << endl;
  cout << "Updated Array: ";
  printArray(arr, n);
  return 0;
}

