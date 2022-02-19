/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set <int> s ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] % 2 == 0)
                s.insert(nums[i]);
            else
                s.insert(nums[i] * 2);
        }
        int diff = *s.rbegin() - *s.begin();
        while(*s.rbegin() % 2 == 0)
        {
            int x = *s.rbegin();
            s.erase(x);
            s.insert(x/2);
            diff = min(diff, *s.rbegin() - *s.begin());
        }
        return diff;
    }
};
