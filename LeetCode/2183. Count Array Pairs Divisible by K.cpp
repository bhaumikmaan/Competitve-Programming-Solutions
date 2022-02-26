/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        long long ans = 0;
        unordered_map<int, int> m ;
        for (int n : nums) 
        {
            long long g1 = gcd(n, k);
            for (auto &[g2, cnt] : m)
                if ((g1*g2)%k == 0)
                    ans += cnt ;
            m[g1]++ ;
        }
        return ans;
    }
};
