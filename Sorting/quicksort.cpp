#include <algorithm>
#include <bits/stdc++.h>
#include <pthread.h>
using namespace std;

int partition(int a[], int l, int h) {
  int pivot = a[h]; // pivot
  int i = (l - 1);  // Index of smaller element

  for (int j = l; j <= h - 1; j++) {
    // If current element is smaller than or
    // equal to pivot
    if (a[j] <= pivot) {
      i++; // increment index of smaller element
      swap(a[i], a[j]);
    }
  }
  swap(a[i + 1], a[h]);
  return (i + 1);
}

void quickSort(int a[], int l, int h) {
  if (l < h) {
    int p = partition(a, l, h);
    quickSort(a, l, p - 1);
    quickSort(a, p + 1, h);
  }
}


void printarr(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
  int a[] = {64, 25, 12, 22, 11};
  // int a2[] = {4, 5, 123, 232, 11};

  int n = sizeof(a) / sizeof(a[0]);
  // int n2 = sizeof(a2) / sizeof(a2[0]);
  quickSort(a, 0, n - 1);
  // cout << "Sorted aay: \n";
  printarr(a ,n)
  // printaay(a, n);
  return 0;
}
