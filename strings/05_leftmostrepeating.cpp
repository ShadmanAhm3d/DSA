
#include <bits/stdc++.h>

using namespace std;
const int CHARS  = 256;

int leftmost(string s1) {
 int count[CHARS] = {0};
int n = s1.length();
  for ( int i=0 ; i < n ; i++){
    count[s1[i]]++;
  }
  
  for ( int i=0 ; i < n ; i++){
    if(count[s1[i]]>1)
      return count[s1[i]];
  }

return 0;

}

int main() {
  string s1 = "aeccbd";

  cout << leftmost(s1);
}
