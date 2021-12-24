/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()) ;
        vector<vector<int>> ans ;
        for (int i = 0; i < intervals.size(); i ++) 
        {
            int x = intervals[i][0], y = intervals[i][1];
            if(ans.size()) 
            {
                if (x <= ans.back()[1] && ans.back()[1] < y)
                    ans.back()[1] = y;
                else if (intervals[i][0] > ans.back()[1])
                    ans.push_back(intervals[i]);
            } 
            else 
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
