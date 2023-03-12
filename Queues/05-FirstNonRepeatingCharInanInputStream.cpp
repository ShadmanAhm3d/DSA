#include <bits/stdc++.h>
using namespace std;
string FirstNonRepeating(string a)

{
  unordered_map<char, int> mp;
  int n = a.length();
  queue<char> q;
  string ans = "";

  for (int i = 0; i < n; i++) {
    q.push(a[i]);
    mp[a[i]]++;

    while (!q.empty() && mp[q.front()] > 1)
      q.pop();

    if (q.empty())
      ans.push_back('#');
    else
      ans.push_back(q.front());
  }

  return ans;
}
int main() {
  string A = "aabc";
  string ans = FirstNonRepeating(A);
  cout << ans << endl;
}
