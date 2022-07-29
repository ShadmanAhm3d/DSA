#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void unions(int a[],int b[],int n,int m){
//   int c[n + m];
//
//   for (int i = 0; i < n; i++) {
//     c[i] = a[i];
//   }
//   for (int i = 0; i < m; i++) {
//     c[n + i] = b[i];
//   }
// sort(c, c + n + m);
//
//   for (int i = 0; i < n + m; i++) {
//
//     if (i == 0 || c[i] != c[i - 1]) {
//       cout << c[i] << " ";
//     }
//   }

  //optimsed sols

  


  }

int main() {
  int a[] = {1, 2, 3, 7, 8, 9};
  int b[] = {2, 3, 4};

  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(b) / sizeof(b[0]);
  unions(a, b, n, m);
  // cout << "Sorted array: \n";
  // printArray(arr, n);
  return 0;
}
