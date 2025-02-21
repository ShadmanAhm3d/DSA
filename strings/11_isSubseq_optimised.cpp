#include <iostream>
using namespace std;

class Solution {
public:
  bool isSubsequence(string s, string t) {
    bool answer = false;
    int l = 0;
    int r = 0;
    int nS = s.size() ;
    int nT = t.size();
    string x = "";

    while (l < nS && r < nT) {
      if (s[l] == t[r]) {
        l++;
        x += t[r];
        r++;
      } else {
        r++;
      }
    }

    if (s == x)
      return true;
    else
      return false;
  }
};

int mian() {
  Solution *sol = new Solution();
  cout << sol->isSubsequence("abc", "ahbdc");

  return 0;
 }
