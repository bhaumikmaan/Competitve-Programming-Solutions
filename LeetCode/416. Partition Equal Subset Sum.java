/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public boolean canPartition(int[] nums) {
        int sum = 0;
        for(int i : nums) 
            sum += i ;
        if(sum%2 != 0)
            return false ;
        int sz = sum/2 ;
        boolean dp[] = new boolean[sz+1] ;
        for(int i = 1 ; i <= sz ; i++)
        {
            dp[i] = false ;
        }
        dp[0] = true ;
        for(int i : nums) {
            for (int j = sz ; j >= i ; j--) 
            {
                if(dp[j - i]) 
                {
                    dp[j] = true ;
                }
            }
        }
        return dp[sz] ;
    }
}
