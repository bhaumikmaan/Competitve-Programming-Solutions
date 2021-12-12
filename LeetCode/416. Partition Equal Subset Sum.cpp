/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i : nums) 
            sum += i ;
        if(sum&1) 
// if 'sum' is a an odd number, we can't have two subsets with equal sum
            return false ;
        int sz = sum>>1 ;// we are trying to find a subset of given numbers that has a total sum of ‘sum/2’.
        vector<bool> dp(sz + 1 , false);
        dp[0] = true ;
        for(int i : nums) {
            for (int j = sz ; j >= i ; j--) 
            {
                if(dp[j - i]) 
                {
                    dp[j] = true;
                }
            }
        }
        return dp[sz] ;
    }
};
