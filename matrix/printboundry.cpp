
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
// void prntboundary(int arr[R][C]){
//
//   if(R == 1){
//     for(int i=0;i<C;i++)
//       cout << arr[0][i] << " " ;
//   }
//
//   if(C == 1){
//     for(int i=0;i<R;i++)
//       cout << arr[i][0] << " " ;
//   }
//
//   for(int i=0 ;i< C ; i++)
//       cout << arr[0][i] << " " ;
//
//   for(int i=1 ;i< R ; i++)
//       cout << arr[i][C-1] << " " ;
//
//   for(int i=C-2 ;i>= 0 ; i--)
//       cout << arr[R-1][i] << " " ;
//
//   for(int i=R-2 ;i>= 1 ; i--)
//       cout << arr[i][0] << " " ;
//
//
// }

void prntboundary(int arr[R][C]) {

  for (int i = 0; i < R * C; i++) {
    int row = i / R;
    int col = i % C;

    if (row == 0 || row == R - 1 || col == 0 || col == C - 1)
      cout << arr[row][col] << " ";
    else
      cout << "  ";

    if (col == C - 1)
      cout << "\n";
  }
}

int main() {
  int arr[R][C];
  cout << "Enter the values " << endl;
  takeip(arr);
  printf(arr);
  cout << endl << " BOUNDARY : " << endl;
  prntboundary(arr);
  
  return 0;
}
