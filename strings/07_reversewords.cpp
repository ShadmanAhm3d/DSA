// Competitive Programming Setup
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

string revv(string str) {
  string ans;

  for (int i = str.length() - 1; i >= 0; i--) {
    if (str[i] == ' ') {
      ans.push_back(str[i]);
    }
    ans.push_back(str[i]);
  }
  return ans;
}

int main() {

  string str = "Geeks for not";

  cout << revv(str);

  return 0;
}
