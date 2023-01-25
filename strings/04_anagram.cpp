#include <bits/stdc++.h>

const int CHAR = 256;
using namespace std;
bool ana(string s1, string s2) {
  int count[CHAR] = {0};
  if (s1.length() != s2.length())
    return false;
  for (int i = 0; i < s1.length(); i++) {
    count[s1[i]]++;
    count[s2[i]]--;
  }
  for (int i = 0; i < CHAR; i++) {
    if (count[i] != 0)
      return false;
  }ijad
  return true;
}

int main() {
  string s1 = "listen";
  string s2 = "silent";

  cout << ana(s1, s2);
}
