
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      int n = heights.size();
      int res= 0;
    
      for(int i=0 ; i < n ; i++){

        int curr = heights[i];
        for(int j= i-1 ; j >= 0 ;j--){
          if(heights[j] >= heights[i]){
            curr+=heights[i];
          }else
            break;
        }

        for(int k= i+1 ; k < n ;k++){
          if(heights[k] >= heights[i]){
            curr+=heights[i];
          }else
            break;
        }

      res = max(res,curr) ;
      }

      return res;
    }
};

int main() {
    Solution solution;
    vector<int> heights = {2, 1, 5};
    int result = solution.largestRectangleArea(heights);
    cout << "Largest rectangle area: " << result << endl;
    return 0;
}
