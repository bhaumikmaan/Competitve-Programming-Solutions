/***  KNOWLEDGE IS POWER  ***/

class DSU {
    public:
    vector<int> par, sz;
    DSU(int n) : par(n), sz(n,1) {
        iota(begin(par), end(par), 0);        
    }
    int find(int x) 
    {
        if(par[x] == x) 
            return x;
        return par[x] = find(par[x]);    
    }
    bool Union(int x, int y) 
    {
        int xp = find(x), yp = find(y);                  
        if(xp == yp) 
            return false;
        if(sz[xp] > sz[yp]) 
            par[yp] = par[xp], sz[xp] += sz[yp] ;
        else 
            par[xp] = par[yp], sz[yp] += sz[xp];
        return true;
    }
};
class Solution {
public:
    int largestComponentSize(vector<int>& nums) {
        int n = size(nums), ans = 1;
        DSU ds(*max_element(begin(nums), end(nums)) + 1);
        unordered_map<int, int> mp;                      
        for(auto c : nums) 
            for(int f = 2; f <= sqrt(c); f++)            
                if(c % f == 0)                           
                    ds.Union(c, f), 
                    ds.Union(c, c/f);
        
        for(int i = 0; i < n; i++)                       
            ans = max(ans, ++mp[ds.find(nums[i])]);
        return ans;
    }
};
