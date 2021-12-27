/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int findComplement(int num) {
        int mask= 1;
        while(num > mask) 
            mask= (mask<<1) | 1;
        return num^mask;
    }
}
