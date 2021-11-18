/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> ans ;
        map<int,bool> m ;
        for(int i = 0 ; i < n ; i++)
        {
            m[nums[i]] = true ;
        }
        for(int i = 1 ; i <= n ; i++)
        {
            if(m.find(i) == m.end())
            {
                ans.push_back(i) ;
            }
        }
        return ans ;
    }
};
