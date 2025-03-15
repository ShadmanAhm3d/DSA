
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        // Sort intervals based on starting point
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;
        auto newInterval = intervals[0];
        ans.push_back(newInterval);
        
        for (auto &interval : intervals) {
            if (interval[0] <= ans.back()[1]) {
                // Merge with the last interval in 'ans'
                ans.back()[1] = max(ans.back()[1], interval[1]);
            } else {
                // No overlap, add a new interval
                ans.push_back(interval);
            }
        }
        return ans;
    }
};
