/*** KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int maxPower(string s) {
        int n = s.length() ;
        if (n < 2) 
        {
            return n ;
        }
        char prev = ' ' ;
        int current = 0 , ans = 1 ;
        for(int i = 0; i < n; i++) 
        {
            char c = s[i] ;
            if (c == prev) 
            {
                current++;
                ans = max(current , ans) ;
            } 
            else
            {
                current = 1 ;
                prev = c ;
            }
        }
        return ans ;
    }
};
