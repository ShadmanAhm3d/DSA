#include <bits/stdc++.h>
#include <ostream>
#include <unordered_map>

using namespace std;

string freqcount(string str, int count[]) {

  for (int i = 0; i < str.length(); i++)
    count[str[i] - 'a']++;

  for (int i = 0; i < 26; i++) {
    if (count[i] > 0) {
      cout << (char)(i + 'a') << " " << count[i] << endl;
    }
  }
  return 0;
}

int main() {
  string str = {"geeksforgeeks"};
  int count[26] = {0};
  freqcount(str, count);

  return 0;
}
