/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0 ;
        int xr = x^y ;
        for(int i =31; i>=0; i--)
        {
            int mask = (1<<i);
            if(mask & xr)
                cnt++;
        }
        return cnt;
    }
};
