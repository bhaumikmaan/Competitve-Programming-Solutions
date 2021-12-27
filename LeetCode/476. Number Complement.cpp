/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        for(int tmp = num; tmp; tmp >>= 1)
            mask = (mask << 1) | 1;      
        return mask ^ num;
    }
};
