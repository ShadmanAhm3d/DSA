
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "The value of n : " << endl;
  cin >> n;
  string arr[n];
  vector<string>vec;
  cout << "Enter the array1" << endl;
  for (int i = 0; i < n; i++) {
    vec.push_back(vec[i]);
  }

  for (int i = 0; i < n; i++) {
    cout << vec[i] <<" ";
  }


  return 0;
}
