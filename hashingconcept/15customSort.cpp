#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

string iss(string s, string order) {
  map<char, int> mp;
  string ans = "";
  for (auto x : s) {
    mp[x]++;
  }
  for (auto x : order) {
    if (mp.find(x) != mp.end()) {
      auto temp = mp.find(x);
      int count = temp->second;
      // 5 -> c  CCCCC
      string str(count, x);
      ans += str;
      mp.erase(x);
    }
  }
  for (auto x : mp) {
    string str(x.second, x.first);
    ans += str;
  }
  return ans;
}

int main() {
  string order[] = {"c", "b", "a"};
  string s[] = {"a", "b", "c", "d"};

  int n = sizeof(s) / sizeof(s[0]);
  string cc = iss(order, s);
  for (int i = 0; i < n; i++) {
    cout << s[i] << " ";
  }

  return 0;
}
