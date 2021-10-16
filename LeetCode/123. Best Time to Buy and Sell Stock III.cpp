/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minn = prices[0],  maxx = prices[n-1], prev = 0, ans = 0;
        vector<int> pref(n, 0);
        
        for(int i = 1; i < n; i++) {
            pref[i] = max(pref[i-1], prices[i] - minn);
            minn = min(minn, prices[i]);
        }

        for(int i = n-2; i >= 0; i--) {
            prev = max(prev, maxx - prices[i]);
            ans = max(pref[i] + prev, ans);
            maxx = max(maxx, prices[i]);   
        }
        return ans;
    }
};
