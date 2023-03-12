#include <bits/stdc++.h>

using namespace std;

string removedup(string s, int k) {

  vector<pair<char, int>> st;

  for (auto c : s) {
    if (st.size() == 0 || st.back().first != c) {
      st.push_back({c, 1});
    } else {
      st.back().second++;
    }
    if (st.back().second == k) {
      st.pop_back();
    }
  }

  //result return
  string res;
  for (auto x : st) {

    // {5, a} = aaaaa
    res.append(x.second, x.first);
  }

  return res;
}

int main() {
  string s = "deeedbbcccbdaa";

  cout << removedup(s,3);

  return 0;
}
