/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int bitwiseComplement(int n) {
        return ((2 << (int)(Math.log(Math.max(n, 1)) / Math.log(2))) - 1) ^ n;
    }
}
