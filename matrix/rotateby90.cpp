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


void rotate(int arr[R][C]) {

  for (int i = C - 1; i >= 0; i--) {
    for (int j = 0; j < R; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl ;
  }
}

void rotate2(int arr[R][C]) {

  for (int i = 0; i <C; i++) {
    for (int j = R-1; j >=0; j--) {
      cout << arr[j][i] << " ";
    }
    cout << endl ;
  }
}

int main() {
  int arr[R][C];
  cout << "Enter the values " << endl;
  takeip(arr);
  printf(arr);
  cout << endl << " BOUNDARY : " << endl;
  cout << "Anticlock Rotate 90 : " << endl ;
  rotate(arr);
  
  cout << "Clockwise Rotate2 90 : " << endl ;
  rotate2(arr);
  return 0;
}

