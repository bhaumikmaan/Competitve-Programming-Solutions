/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int smallestRepunitDivByK(int k) {
        int[] hit = new int[k];
        int n = 0, ans = 0;
        while (true) 
        {
            ans++ ;
            n = (n * 10 + 1) % k; 
            if (n == 0) 
                return ans ;
            if (hit[n] == 1) 
                return -1;
            hit[n] = 1 ;
        }
    }
}
