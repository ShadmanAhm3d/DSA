#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {

    vector<int> answer;

    int lastelem = nums2.size()-1;
    for (int i = 0; i < nums1.size(); i++) {
        int val = -1;
        int elem = nums1[i];
      for (int j = 0; j < nums2.size() ; j++) {
          if(nums2[j]==elem && nums2[j+1] > elem  ){
              val= nums2[j+1];
              break;
          }else continue;

      }
      answer.push_back(val);

  }
    return answer;
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
