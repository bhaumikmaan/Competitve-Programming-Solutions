/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int maxProfit(int[] prices) {
        int l = Integer.MAX_VALUE , ans = 0 , p = 0 ; 
        for(int i = 0; i < prices.length ; i++)
        {
            if(prices[i] < l)
            {
                l = prices[i];
            }
            p = prices[i] - l ;
            if(ans < p)
            {
                ans = p ;
            }
        }
        return ans ;
    }
}
