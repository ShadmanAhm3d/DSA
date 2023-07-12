#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

/* int MaxSum(int arr[], int n , int k){
      int maxTotal = INT8_MIN;
      int lenght = n-k+1;
      for(int i=0 ; i< lenght; i++){
        int currTotal = 0;
        for(int j=i ; j <i+ k ; j++){
          currTotal += arr[j];

       }
        maxTotal  = max(currTotal,maxTotal);
      }
      return maxTotal;
} */

// currentSum
// first iterated index
// last iterated index

int MaxSum(int arr[], int n, int k) {
  if (n < k) {
    return n;
  }
  int curr_sum = 0;
  for (int i = 0; i < k; i++) {
    curr_sum += arr[i];
  }
  int maxSum = INT8_MIN;

  for (int i = 1; i < n - k + 1; i++) {
    // curr_sum = curr_sum - arr[i - 1] + arr[i + k - 1];
    curr_sum = curr_sum - arr[i - 1] + arr[i + k - 1];
    maxSum = max(maxSum, curr_sum);
  }

  return maxSum;
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
  int k = 4;
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Number of Elements Processed in the array: " << n << endl;

  // vector<int> flippedIndexes = solve(arr, n);
  // cout << "Flipped Indexes: ";
  // for (int i = 0; i < flippedIndexes.size(); i++) {
  //   cout << flippedIndexes[i] << " ";
  // }
  // cout << endl;

  cout << MaxSum(arr, n, k) << endl;
  cout << "Updated Array: ";
  printArray(arr, n);

  return 0;
}

