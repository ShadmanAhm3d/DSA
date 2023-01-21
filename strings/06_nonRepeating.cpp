

#include <bits/stdc++.h>

using namespace std;
const int CHARS  = 256;

char leftmost(string s1) {
 
  int count[CHARS] = {0};
  for(int i = 0; i < s1.length(); i++){
    count[s1[i]]++;
  }

  for(int i = 0; i < s1.length(); i++){
    if(count[s1[i]] == 1)
      return (char)s1[i] ;
  }
  return '$';
}

int main() {
  string s1 = "geeg";

  cout << leftmost(s1);
}
