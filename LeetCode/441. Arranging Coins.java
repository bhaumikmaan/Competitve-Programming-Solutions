/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int arrangeCoins(int n) {
        long lo = 1, hi = n;
        while (lo <= hi) {
            long mid = (lo+hi)/2;
            long total = mid*(mid+1)/2;
            if (total == n) {
                return (int) mid;
            }
            else if (total > n) {
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        return (int) hi;
    }
}
