/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = INT_MAX , ans = 0 , p = 0 ; 
        for(int i = 0; i < prices.size(); i++)
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
};
