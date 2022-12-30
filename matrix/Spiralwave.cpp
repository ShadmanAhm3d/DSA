// C++ STL code to declare and print a 2D Vector
#include <iostream>
#include <vector> // for vectors
using namespace std;

// print the vector
void printingsa(vector<vector<int>> v1) {

  cout << "2D vector elements..." << endl;
  for (int i = 0; i < v1.size(); i++) {
    for (int j = 0; j < v1[i].size(); j++)
      cout << v1[i][j] << " ";
    cout << endl;
  }
}

vector<int> printspiral(vector<vector<int>> v1) {

  // print the vector in spiral format
  int row = v1.size();
  int col = v1[0].size();
  int count = 0;
  int totalelements = row * col;
  // indexer's
  int startingRow = 0;
  int startingCol = 0;
  int endingRow = row - 1;
  int endingCol = col - 1;

  vector<int> answer;
  // Code;
  //

  while (count < totalelements) {

    for (int index = startingCol; count < totalelements && index <= endingCol;
         index++) {
      answer.push_back(v1[startingRow][index]);
      count++;
    }
    startingRow++;

    // ending col priniting

    for (int index = startingRow; count < totalelements && index <= endingRow;
         index++) {
      answer.push_back(v1[index][endingCol]);
      count++;
    }
    endingCol++;
    // ending Row
    for (int index = endingCol; count < totalelements && index >= startingCol;
         index--) {
      answer.push_back(v1[endingRow][index]);
      count++;
    }
    endingRow++;
    // print starting Col
    for (int index = endingRow; count < totalelements && index >= startingRow;
         index--) {
      answer.push_back(v1[index][startingCol]);
      count++;
    }
    startingCol++;
  }
  return answer;
}

int main() {
  int row;
  int col;

  // Input rows & columns
  cout << "Enter number of rows: ";
  cin >> row;
  cout << "Enter number of columns: ";
  cin >> col;

  // Declaring 2D vector "v1" with
  // given number of rows and columns
  // and initialized with 0
  vector<vector<int>> v1(row, vector<int>(col, 0));

  // Input vector's elements
  for (int i = 0; i < v1.size(); i++) {
    for (int j = 0; j < v1[i].size(); j++) {
      cout << "Enter element: ";
      cin >> v1[i][j];
    }
  }
  // Printing the 2D vector's elements
  cout << endl << "NORMAL ::" << endl;
  printingsa(v1);
  cout << endl << "WAVE ::" << endl;
 for (int x : printspiral(v1)) {
        cout << x << " ";
    }
  return 0;
}
