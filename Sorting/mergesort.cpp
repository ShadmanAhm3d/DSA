
#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

void mergesortt(int arr1[], int arr2[], int n, int n2) {
  //   int c[n+n2];
  //   int i;
  //   for(i=0;i<n;i++){
  //     c[i]= arr1[i];
  //   }
  //
  //   for(i=0;i<n2;i++){
  //     c[n+i]= arr2[i];
  //   }
  //   sort(c,c+n+n2);
  //   for(i=0;i<(n+n2);i++){
  //     cout << c[i] << "  " ;
  //   }
  // }

  // efficient sools

  int j =0;
  int i=0;
  while (i < n && j < n2) {
    if (arr1[i] <= arr2[j]) {
      cout << arr1[i] << " ";
      i++;
    } else {
      cout << arr2[j] << " ";
      j++;
    }
  }
  while (i < n) {
    cout << arr1[i] << " ";
    i++;
  }

  while (j < n2) {
    cout << arr2[j] << " ";
    j++;
  }
}

// // Function to print an array
// void printArray(int arr[], int size) {
//   int i;
//   for (i = 0; i < size; i++)
//     cout << arr[i] << " ";
//   cout << endl;
// }
//
// Driver program to test above functions
int main() {
  int arr1[] = {64, 25, 12, 22, 11};
  int arr2[] = {4, 5, 123, 232, 11};

  int n = sizeof(arr1) / sizeof(arr1[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  mergesortt(arr1, arr2, n, n2);
  // cout << "Sorted array: \n";
  // printArray(arr, n);
  return 0;
}
