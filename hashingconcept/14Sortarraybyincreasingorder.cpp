#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> relativesortt(vector<int> &arr1) {

  map<int, int> umap;
  for (auto x : arr1) {
    umap[x]++;
  }

  sort(arr1.begin(), arr1.end(), [&](int a, int b) {
    return umap[a] != umap[b] ? umap[a] < umap[b] : b < a;
  });

  return arr1;
}

int main() {
  int n;
  vector<int> arr1 = {1, 1, 2, 2, 2, 3};

  vector<int> v = relativesortt(arr1);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
