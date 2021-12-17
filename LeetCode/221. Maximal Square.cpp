/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),0));
        int ans = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j ++){
                if(matrix[i][j] == '1'){
                    if(i == 0|| j == 0){
                        dp[i][j] = 1;
                    } else {
                        dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
                    }
                    ans = max(ans, dp[i][j] * dp[i][j]);
                }
            }
        }
        return ans;
    }
};
