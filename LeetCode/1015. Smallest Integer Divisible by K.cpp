/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int v[100000] = {0}, n = 0, ans = 0;
        while (true) 
        {   
            ans++ ;
            n = (n * 10 + 1) % k; 
            if (!n) 
                return ans;
            if (v[n]) 
                return -1 ;
            v[n] = 1 ;
        }
    }
};
