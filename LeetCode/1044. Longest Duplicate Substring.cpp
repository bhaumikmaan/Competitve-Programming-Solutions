/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    string longestDupSubstring(string s) {
        unordered_map<char, vector<int>> hash;
        int n = s.length();
        
        for(int i=0; i<n; i++)
            hash[s[i]].push_back(i);
        
        int Max = 0, index = -1;
        
        for(int i=0; i<n; i++)
        {
            char f = s[i];
            hash[f].erase(hash[f].begin());
            for(int it : hash[f])
            {
                int j = 0;
                
                while(i+j < n and it+j < n and s[i+j] == s[it+j])
                    j++;
                
                if(j > Max)
                {
                    Max = j;
                    index = i;
                }
                if(Max == n-i-1)
                    return s.substr(index, Max);
            }
        }
        
        if(Max == 0)
            return "";
        else
            return s.substr(index, Max);
    }
};
