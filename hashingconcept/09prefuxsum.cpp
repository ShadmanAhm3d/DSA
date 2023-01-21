
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool keypair(int arr[], int n) {
  unordered_set<int> uset;
  int pre_sum = 0;
  for (int i = 0; i < n; i++) {
    pre_sum += arr[i];

    if (pre_sum == 0)
      return true;

    if (uset.find(pre_sum) != uset.end())
      return true;

    uset.insert(pre_sum);
  }

  return false;
}

int main() {
  int n;
  cout << "The value of n : " << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the array1" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (keypair(arr, n)) {
    cout << "YES" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
