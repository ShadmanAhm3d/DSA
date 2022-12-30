#include <bits/stdc++.h>

// passing 2D arrays as arguments
using namespace std;

const int R = 3;
const int C = 2;

void print(int arr[R][C]) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++)
      cout << arr[i][j] ;
  }
  cout << endl;
}

int takeip(int arr[R][C]) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++)
      cin >> arr[i][j];
  }
  return 0;
}

bool isPresent(int arr[R][C], int target ) {

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++)
      if (arr[i][j] == target)
        cout << i << " " << j ;
        return 1;
  }

  return 0;
}
int main() {

  int arr[R][C];
  cout << "Enter the values " << endl;
  takeip(arr);
  print(arr);

  int target;
  cout << "Enter the target value " << endl;
  cin >> target;
  if (isPresent(arr, target)) {
    cout << "Found";
  } else {
    cout << "not found nigga";
  }
  return 0;
}
