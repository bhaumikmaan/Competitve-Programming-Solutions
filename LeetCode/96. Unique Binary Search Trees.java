/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int numTrees(int n) {
        if (n <= 1) {
            return 1;
        }

        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            for (int j = 0; j < i / 2; j++) {
                dp[i] += dp[j] * dp[i - 1 - j];
            }
            dp[i] *= 2;
            if ((i & 1) == 1) {
                dp[i] += dp[i / 2] * dp[i / 2];
            }
        }

        return dp[n];
    }
}
