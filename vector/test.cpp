// C++ STL code to declare and print a 2D Vector
#include <iostream>
#include <vector> // for vectors
using namespace std;


void printingsa(vector<vector<int> >v1 ){

    cout << "2D vector elements..." << endl;
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1[i].size(); j++)
            cout << v1[i][j] << " ";
        cout << endl;
    }
}

void printspiral(vector<vector<int>>v1) {

  for (int i = 0; i < v1.size(); i++) {

    if (i & 1) {
      // go to odd columns
      for (int j = v1[i].size()-1 ; j >= 0; j--) {
        cout << v1[j][i] << "  ";
      }

    } else {
      // print the eveen col

      for (int j = 0; j < v1.size(); j++) {
        cout << v1[j][i] << "  ";
      }
    } }
  }


int main()
{
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
    vector<vector<int> > v1(row, vector<int>(col, 0));

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
  printspiral(v1);
    return 0;
}
