/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int arrangeCoins(int n) {
        long lo = 0, hi = n, mid, tmp;
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            tmp = mid * (mid + 1) / 2;
            
            if (tmp == n) 
              return mid;
            
            if (tmp <= n) 
              lo = mid + 1;
            else 
              hi = mid - 1;
        }
        return lo-1;

    }
};
