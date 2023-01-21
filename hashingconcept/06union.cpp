
// Simple CPP program to find first non-
// repeating element.
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// NOTE --> Hashing Sol's

int unionsss(int arr1[], int n, int arr2[], int m) {
  unordered_set<int> uset;

  for (int i = 0; i < n; i++)
    uset.insert(arr1[i]);

  for (int i = 0; i < m; i++)
    uset.insert(arr2[i]);

  return uset.size();

  return -1;
}

// Driver code
int main() {
  int n;
  cout << "The value of n : " << endl;
  cin >> n;

  int m;
  cout << "The value of m : " << endl;
  cin >> m;
  int arr1[n];
  int arr2[m];
  cout << "Enter the array1" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }

  cout << "Enter the array2" << endl;
  for (int i = 0; i < m; i++) {
    cin >> arr2[i];
  }
  cout << "The union count is" << endl;
  cout << unionsss(arr1, n, arr2, m);
  return 0;
}
