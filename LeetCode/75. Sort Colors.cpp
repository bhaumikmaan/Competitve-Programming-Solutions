/***  KNOWLEDGE IS POWER  ***/

// O(N*N) Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                {
                    swap(nums[j],nums[i]);
                }
                else 
                    continue;
            }
        }
    }
};

// O(N) Approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0 , m = 0 , r = nums.size() - 1 ;
        while(m <= r)
        {
            if(nums[m] == 0) 
            {
                swap(nums[l], nums[m]) ;
                l++ , m++ ;
            }
            else if(nums[m] == 1)
            {
                m++ ;
            }
            else 
            {
                swap(nums[m], nums[r]) ;
                r-- ;
            }
        }
    }
};
