/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto c : nums) 
            if(s.count(c)) 
                s.erase(c) ;
            else 
                s.insert(c);  
        return *begin(s); 
    }
};
