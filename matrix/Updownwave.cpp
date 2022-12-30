#include <bits/stdc++.h>

// passing 2D arrays as arguments and printing the sum of the rows
using namespace std;

const int R = 3;
const int C = 3;
void print(int arr[R][C]) {
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cout << arr[i][j] << " ";
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

void printspiral(int arr[R][C]) {

  for (int i = 0; i < C; i++) {

    if (i & 1) {
      // go to odd columns
      for (int j = R-1; j >= 0; j--) {
        cout << arr[j][i] << "  ";
      }

    } else {
      // print the eveen col

      for (int j = 0; j < R; j++) {
        cout << arr[j][i] << "  ";
      }
    } }
  }

  int main() {

    int arr[R][C];
  
    cout << "Enter the values " << endl;

    takeip(arr);
    cout << "In normal Wave" << endl;
    print(arr);
    cout << "In spiral Wave" << endl;
    printspiral(arr);

    return 0;
  }
