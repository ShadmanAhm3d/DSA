
// Competitive Programming Setup
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int bs(int arr[], int n, int x) {
  int high = n - 1, low = 0;
  int ans = n;
  if(low > high) return -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if( arr[mid] >= x) {
      high = mid -1;
        ans = mid;
    }else{
      low = mid+1;
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

    int arr[] = {1,3,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    cout << "Original Array: ";
    printArray(arr, n);
    cout << endl << "The size of array " << n << endl;
    cout << bs(arr, n, x) << endl;

    cout << "Updated Array: ";
    printArray(arr, n);

    return 0;
  }
