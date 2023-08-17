#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>ans;
         unordered_map<string,vector<string>>umap;

         for(auto x : strs){
             string temp = x;
             sort(x.begin(),x.end());
             umap[x].push_back(temp);
         }

         
         for(auto i : umap){
         
             ans.push_back(i.second);

         }
         return ans;}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> output = groupAnagrams(strs);
    
    for (const vector<string>& group : output) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
}

