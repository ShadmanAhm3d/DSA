#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

vector<string> relativesortt(vector<string> &arr1) {

  vector<string> answer;
  unordered_map<string , vector<string>> umap;

   for (auto x: arr1){
    string temp = x;
    sort(x.begin(),x.end());
    umap[x].push_back(temp);
  }
   
   /* for (auto x : umap){
     vector<int>temp = x.second();
     answer.push_back(temp);
  } */

   for (auto itr= umap.begin(); itr!=umap.end();itr++){
    answer.push_back(itr->second());
  }

  return answer;
}

int main() {
  vector<string>arr1{"eat","tea","tan","ate","nat","bat"};
  vector<string> v = relativesortt(arr1 );
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
