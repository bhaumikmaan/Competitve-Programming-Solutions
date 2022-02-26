/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int digsum(int n)
    {
        int s = 0 ;
        while(n)
        {
            s += n%10 ;
            n/=10 ;
        }
        return s ;
    }
    int countEven(int n) {
        int cnt = 0 ;
        for(int i = 1 ; i <= n ; i++)
        {
            if(digsum(i)%2 == 0)
            {
                cnt++ ;
            }
        }
        return cnt ;
    }
};
