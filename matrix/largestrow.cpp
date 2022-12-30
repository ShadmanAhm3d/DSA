#include <bits/stdc++.h>

// passing 2D arrays as arguments and printing the sum of the rows
using namespace std;

const int R = 3;
const int C = 3;

void print(int arr[R][C]) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << arr[i][j];
    }
    cout << endl;
  }
}

int takeip(int arr[R][C]) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++)
      cin >> arr[i][j];
  }
  return 0;
}

int Largestrow(int arr[R][C]) {

  int rowindex ;
  int Max = INT_MIN;
  for (int i = 0; i < R; i++) {
    int sum = 0;
    for (int j = 0; j < C; j++) {
      sum = sum + arr[i][j];
    }
    if (sum > Max) {
      Max = sum;
      rowindex = i; // we are returning the rowIndex
    }
  }
  cout << "the  max sum is  " << Max<<  endl;
  return rowindex;
}
int main() {

  int arr[R][C];
  cout << "Enter the values " << endl;
  takeip(arr);
  print(arr);

  int num = Largestrow(arr);
  cout << num;
  return 0;
}
