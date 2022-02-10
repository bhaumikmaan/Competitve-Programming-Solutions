/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m ;
        int res = 0 , currsum = 0 , n = nums.size() ;
        for(auto &it : nums)
        {
            currsum += it ;
            if(currsum == k)
            { 
                res++ ; 
            }
            if(m.count(currsum - k))
            {
                res += m[currsum-k] ;
            }
            
            m[currsum]++ ;
        }
        
        return res ;
    }
};
