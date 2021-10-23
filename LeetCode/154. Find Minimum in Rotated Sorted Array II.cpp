/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0 ;
        int j=nums.size()-1 ;
        while(i < j)
        {
            if(nums[i]<=nums[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return nums[i];
    }
};
