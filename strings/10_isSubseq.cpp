#include <iostream>
using namespace std;
class Solution {
public:
  bool isSubsequence(string s, string t) {
    bool answer = false;
    int pFound = -1;
    string x = "";
    for (int i = 0; i < s.size(); i++) {
      cout << "elem of outer i  : " << s[i] << endl;
      cout << "pf outer i  : " << pFound << endl;

      for (int j = pFound + 1; j < t.size(); j++) {
        cout << "elem inner  j for i: " << s[i] << endl;
        cout << "elem inner j for j : " << t[j] << endl;
        if (s[i] == t[j]) {

          pFound = j;
          cout << "pf inner  : " << pFound << endl;
          cout << " HIT BITCH " << endl;

          x += s[i];
          break;
        }
      }
    }

    cout << x;
    if (s == x)
      return true;
    else
      return false;
  }
};

int main() {
  Solution *sol = new Solution();
  cout << sol->isSubsequence("abc", "ahbfc");
}
