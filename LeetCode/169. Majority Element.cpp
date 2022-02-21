/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m ;
        int ans ;
        for(auto i:nums)
        {
            m[i]++;
        }
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(m[nums[i]] > (nums.size()/2))
            {
                ans =  nums[i] ;
                break ;
            }
        }
        return ans ;
    }
};
