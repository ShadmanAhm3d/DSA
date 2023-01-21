#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> relativesortt(vector<int> &arr1, vector<int> &arr2) {

  vector<int> answer;
  map<int, int> umap;
  for (auto x : arr1)
    umap[x]++;

  for (auto y : arr2) {
    if (umap.find(y) != umap.end()) {
      // count
      auto x = umap.find(y);
      int count = x->second;
      vector<int> v(count, y); // 2 baar y value ko daal do array me
      answer.insert(answer.end(), v.begin(), v.end());
      umap.erase(y);
    }
  }

  for (auto x : umap) {
    int element = x.first;
    int count = x.second;
    vector<int> v(count, element); // 2 baar y value ko daal do array me
    answer.insert(answer.end(), v.begin(), v.end());
  }

  return answer;
}

int main() {
  int n;
  vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
  vector<int> arr2 = {2, 1, 4, 3, 9, 6};

  vector<int> v = relativesortt(arr1, arr2);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
