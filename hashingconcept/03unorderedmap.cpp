#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main() {

  unordered_map<string, int> umap;
  umap["shadman"] = 23;
  umap["ahmed"] = 13;
  umap["niggasinparis"] = 13;

  /* for (auto x : umap)
  cout << x.first << " " << x.second << endl; */
  cout << "The first iterattion " << endl;
  for (auto itr = umap.begin(); itr != umap.end(); itr++)
    cout << itr->first <<  " " << itr->second << endl;

  string key = "shadman";
  if (umap.find(key) == umap.end()) {
    cout << "not found";
  } else {
    cout << "found" << endl;
    auto temp = umap.find(key);
    cout << "key is " << temp->first << " " << endl ;
    cout <<"value is" <<  temp->second;
  }

   umap.insert(make_pair("shadman123", 1444));

   key = "ahmed";
  umap.erase(key);
  cout << endl << "The second iterattion " << endl;
  for (auto itr = umap.begin(); itr != umap.end(); itr++)
    cout << itr->first <<  " " << itr->second << endl;

  return 0;
}
