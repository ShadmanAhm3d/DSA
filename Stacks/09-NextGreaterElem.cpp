
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    stack<int>st;
    vector<int>ans;
    int n = nums2.size();
    unordered_map<int,int>umap;

    for( int i = n-1;i>=0; i--){
      int elem = nums2[i];
      while(!st.empty() && st.top() <= elem){
        st.pop();
      }
      int res= (st.empty()) ? -1 : st.top();
      umap.insert({elem,res});
      st.push(elem);
    }

    for( auto c : nums1){
      ans.push_back(umap[c]);
    }
    return ans;
  }
};
int main() {
  Solution solution;

  vector<int> nums1 = {4, 1, 2};
  vector<int> nums2 = {1, 3, 4, 2};

  vector<int> result = solution.nextGreaterElement(nums1, nums2);

  cout << "Output: ";
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
