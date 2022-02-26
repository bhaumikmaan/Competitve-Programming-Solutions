/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int cnt[26] = {0} ;
        for (auto c : s) 
        {
            cnt[c - 'a']++ ;
        }
        string ans = "" ;
        int prevsize = -1 , k = 0 ;
        while(ans.size() < s.size()) 
        {            
            for(int i = 25; i >= 0; --i) 
            {   
                if(cnt[i] == 0) 
                {
                    continue;
                }
                if((i + 'a') == ans.back() && k == repeatLimit)
                {
                    continue;
                }
                if(i + 'a' == ans.back())
                {
                    k++ ;
                }
                else
                {
                    k = 1 ;
                }
                ans += i + 'a' ;
                cnt[i]-- ;
                break ;
            }
            if (prevsize == ans.size()) 
            {
                break ;
            }
            prevsize = ans.size();
        }
         
        return ans;
    }
};
