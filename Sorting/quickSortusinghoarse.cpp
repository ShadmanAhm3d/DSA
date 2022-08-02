#include <algorithm>
#include <bits/stdc++.h>
#include <future>
#include <pthread.h>
using namespace std;

int hoarse(int a[], int l, int h) {

  int pivot = a[l];
  int i = l - 1;
  int j = h + 1;

  while (true) {
    do {
      i++;
    } while (a[i] < pivot);
  }

  while (true) {
    do {
      i++;
    } while (a[j] > pivot);
  }

  if (i >= j)
    return j;
  swap(a[i], a[j]);
}


// print
void printarr(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
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
  printarr(a, n);
  // printaay(a, n);
  return 0;
}
