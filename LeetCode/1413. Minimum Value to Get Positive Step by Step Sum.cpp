/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans = 0, sum = 0;
        for(auto i : nums)
        {
            sum += i ; 
            ans = min(ans, sum) ;
        }
        return -ans + 1 ;
    }
};
