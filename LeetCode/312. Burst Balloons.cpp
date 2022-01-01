/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size() + 2;        
        vector<vector<int>> dp(n, vector<int>(n));
        vector<int> v(n, 1);
        int i = 1;
        for(auto num : nums) 
        {
            v[i++] = num ;
        }
        for(int len = 2; len <= n; len++) 
        { 
            for(int i = 0; i <= n - len; i++) 
            {
                int j = i + len - 1;
                for(int k = i + 1; k < j; k++) 
                { 
                    dp[i][j] = max(dp[i][j] , dp[i][k] + dp[k][j] + v[i]*v[k]*v[j]) ;
                }
            }
        }
        return dp[0][n - 1] ;
    }
};
