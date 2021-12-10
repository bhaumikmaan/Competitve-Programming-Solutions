###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def numTilings(self, n):
        """
        :type n: int
        :rtype: int
        """
        mod = 10 ** 9 + 7
        dp = [0 for _ in range(n + 5)]
        dp[1] = 1 
        dp[2] = 2 
        dp[3] = 5 
        for i in range(4 , n + 1):
            dp[i] = ((2*dp[i-1])%mod) + dp[i-3] 
            dp[i] %= mod 
        return dp[n]
