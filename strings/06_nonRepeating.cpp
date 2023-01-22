

#include <bits/stdc++.h>
#include <unordered_map>

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

string notcheck(string s1){
 unordered_map<char, int>umap;
  for(auto x : s1)
  umap[x]++;
  string ans;
  int n = s1.length();
  for (auto itr : umap){
    int key = itr.first;
    int count = itr.second;
    if(count == 1)
      ans.push_back(key) ;
  }
  return ans;
}



int main() {
  string s1 = "geeksrofgeeks";

/*   cout << leftmost(s1); */
  cout << notcheck(s1);
}
