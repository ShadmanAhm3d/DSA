#include <iostream>
#include <vector>
using namespace std;

// pritn the vector
int printn(vector<vector<int>> data, int Rows , int cols) {
  for (int i = 0; i < Rows -1; i++) {
    for (int j=0 ; j < cols ; j++){
       cout << data[i][j] << " "  ;
    }
    cout << endl;
  }
  return 0;
}


int takeip(vector<vector<int>> data, int Rows , int cols) {
  for (int i = 0; i < Rows; i++) {
    for (int j=0 ; j < cols ; j++){
       data.push_back([i][j]);
    }
  }
  return 0;
}



int main() {
 int Rows, cols;
  vector<vector <int>> data ;
  cout << "enter the row and col" << endl ;
  cin >> Rows >> cols ;
  cout << "Enter the val"  << endl ;
  takeip(data,Rows, cols);
  printn(data,Rows, cols);
  // printn(data);
}
