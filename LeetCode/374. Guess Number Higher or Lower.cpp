/***  KNOWLEDGE IS POWER  ***/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1 , r = n ;
        while(l <= r) 
        {
            int m = l + (r-l)/2 ;
            if(guess(m) == 0) 
                return m ;
            if(guess(m) < 0) 
                r = m - 1 ;
            else 
                l = m + 1 ;
        }
        return 0;
    }
};
