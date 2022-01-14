/***  KNOWLEDGE IS POWER  ***/
//  APPROACH I //

class Solution {
public:
    int myAtoi(string s) {
        int res = 0 , i = 0 , sign = 1 ;
        while(i < s.size() && s[i] == ' ')
            i++ ;
        if(s[i] == '-' || s[i] == '+')
        {
            if(s[i] == '-')
            {
                sign = -1 ;
            }
            else
            {
                sign = 1 ;
            }
            i++ ;
        }
        while(i < s.length() && (s[i] >= '0' && s[i] <= '9'))
        {
            int digit = (s[i]-'0')*sign ;
            if(sign == 1 && (res > INT_MAX/10 || (res == INT_MAX/10 && digit > INT_MAX%10)))
                return INT_MAX ;
            if(sign == -1 &&(res < INT_MIN/10 || (res == INT_MIN/10 && digit < INT_MIN%10)))
                return INT_MIN ;
            res = res*10 + digit ;
            i++ ;
        }
        return res ;
    }
};
