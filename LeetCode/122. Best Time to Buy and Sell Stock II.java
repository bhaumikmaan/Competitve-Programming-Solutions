/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int maxProfit(int[] prices) {
        int bd = 0 ;
        int sd = 0 ;
        int profit = 0 ;
        for(int i = 1; i < prices.length; i++)
        {   
            if(prices[i] >= prices[i - 1])
            {
                sd++;
            }
            else
            {
                profit += prices[sd] - prices[bd];
                bd = sd = i;
            }
        }
        profit += prices[sd] - prices[bd];
        return profit; 
    }
}
