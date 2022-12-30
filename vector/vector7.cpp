#include <iostream>
#include <utility>
#include <vector>

using namespace std;

void print(vector<vector<int>> &a) {
  cout << "Current Size :" << a.size() << endl;
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a[0].size(); j++) {
      cout << a[i][j] << "  ";
    }
  }
  cout << endl;
}

int main() {
  int N;
  cout << " N -->  " << endl;
  cin >> N;
  vector<vector<int>> vec;

  for(int i =0 ; i < N ; i++){
   int n ;
    cin >> n;
    vector<int>temp ;
    for (int j=0 ; j< n ; j++){
      int x ;
      cin >> x;
      temp.push_back(x);
    }
  }
  print(vec);
  

  return 0;
}
