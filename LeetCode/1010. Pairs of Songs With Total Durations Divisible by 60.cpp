/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int m[60] = {} ;
        int ans = 0 ;
        for(auto x:time){
            int t = x % 60;
            int y = (60 - t)%60;
            ans += m[y];
            m[t]++;
        }
        return ans;
    }
};
