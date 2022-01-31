/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = Integer.MIN_VALUE ;
        for(int i = 0; i < accounts.length; i++)
        {
            int sum = 0 ;
            for(int j = 0; j < accounts[0].length; j++)
            {
                sum += accounts[i][j];
            }
            max = Math.max(sum, max) ;
        }
        return max;
    }
}
