#include <bits/stdc++.h>

using namespace std;

// {
// 	if (high > low)
// 	{
// 		int mid = (high + low) / 2;

// 		if (arr[mid] == x)
// 			return mid;

// 		if (arr[mid] > x)
// 			return BS(arr, x, mid + 1, high, n);

// 		return BS(arr, x, low, mid - 1, n);
// 	}
// 	return -1;
// }
int BS(int arr[], int x, int low, int high, int n) {
  while (high > low) {
    int mid = (high + low) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      high = mid - 1;

    if (arr[mid] < x)
      low = mid + 1;
  }
  return -1;
}

int Search(int arr[], int n, int x) {
  int high = arr[1];
  int low = arr[0];

  while (x >= high) {
    low = high;
    high = high * 2;
  }
  return BS(arr, x, low, high, n);
}

int main() {

  int arr[] = {1, 2, 3, 3, 4, 4, 5,  6,  6,  7,  7, 8,
               8, 8, 9, 9, 9, 9, 12, 12, 12, 12, 12};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 5;
  int res = Search(arr, n, x);
  (res == -1) ? cout << "elem not present"
              : cout << "elem present at index : " << res;
  return 0;
}
