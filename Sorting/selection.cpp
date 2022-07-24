#include <algorithm>
#include <bits/stdc++.h>
#include <cinttypes>
#include <vector>
using namespace std;
//
//
// void sortings(int arr[], int  n){
//
//   int temp[n];
//   for(int i =0;i< n ;i++)
//     {
//       int  min_val = 0;
//       for(int  j =1;j<n ;j++){
//         if(arr[j] < arr[min_val]){
//           min_val = j;
//
//           temp[i] = arr[min_val];
//           arr[min_val] =  ;
//
//         }
//       }
//     }
// }
//
//
// int sortings(int arr[], int n){
//   for(int i=0;i<n-1;i++){
//     int min_val = i;
//     for(int j=i+1;j< n;j++){
//       if(arr[j] < arr[min_val])
//         min_val = j;
//       swap(arr[min_val] , arr[i]);
//     }
//   }
//   return 0;
// }
//
//
// //Function to print an array
// void printArray(int arr[], int n)
// {
//     int i;
//     for (i=0; i <n ; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }
//
//
// int main() {
//
//     int arr[] = {5,4,3,2,1,7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//
//     sortings(arr,n);
//   printArray(arr,  n);
//
//     return 0;
// }

// Swap function
void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
void selectionSort(int arr[], int n) {
  int i, j, min_idx;

  // One by one move boundary of
  // unsorted subarray
  for (i = 0; i < n - 1; i++) {

    // Find the minimum element in
    // unsorted array
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    // Swap the found minimum element
    // with the first element
    swap(&arr[min_idx], &arr[i]);
  }
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
  selectionSort(arr, n);
  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}
