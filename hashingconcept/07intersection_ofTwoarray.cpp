
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// NOTE --> wrong logics
/* int intersection(int arr1[], int n, int arr2[], int m) {

  unordered_set<int> uset;
  int initsize = n + m;
  for (int i = 0; i < n; i++)
    uset.insert(arr1[i]);

  for (int i = 0; i < m; i++)
    uset.insert(arr2[i]);

  int acutalsize =  initsize -  uset.size();
  return acutalsize;

  return -1;
} */

int intersection(int arr1[], int n, int arr2[], int m) {

  unordered_set<int> uset;
  for (int i = 0; i < n; i++)
    uset.insert(arr1[i]);

  int count =0 ;

  for (int i = 0; i < m; i++) {
    
      int key = arr2[i];
      if (uset.find(key) != uset.end()){
        count++;
      uset.erase(key);
    }
  }

  return count;
}

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
  cout << intersection(arr1, n, arr2, m);
  return 0;
}
