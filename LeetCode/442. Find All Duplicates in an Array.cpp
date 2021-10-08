class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m ;
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++)
        {
            m[nums[i]]++ ;
        }
        vector<int> ans ;
        for(auto i:m)
        {
            if(i.second == 2)
            {
                ans.push_back(i.first) ;
            }
        }
        return ans ;
    }
};
