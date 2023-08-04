
// Competitive Programming Setup
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int R = 3;
const int C = 3;
int takeip(int arr[R][C]) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> arr[i][j];
    }
  }
  return 0;
}

void printf(int arr[R][C]) {
  cout << "--------------" << endl;
  for (int i = 0; i < C; i++) {
    for (int j = 0; j < R; j++) {
      cout << arr[i][j] << "    ";
    }
    cout << endl;
  }
  cout << "--------------" << endl;
}

void printsnake(int arr[R][C]) {

  for (int i = 0; i < R; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < C; j++)
        cout << arr[i][j] << " ";
    } else {
      for (int j = C - 1; j >= 0; j--)
        cout << arr[i][j] << " ";
    }
  }
}
int main() {
  int arr[R][C];
  cout << "Enter the values " << endl;
  takeip(arr);
  printf(arr);
  printsnake(arr);
  return 0;
}
