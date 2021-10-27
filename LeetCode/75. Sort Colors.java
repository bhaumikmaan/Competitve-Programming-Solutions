/***  KNOWLEDGE IS POWER  ***/

// O(N*N) Approach
class Solution {
    public void sortColors(int[] nums) {
        for(int i=0 ; i<nums.length ; i++)
        {
            for(int j = i + 1 ;j<nums.length ; j++)
            {
                if(nums[j] < nums[i])
                {
                    // swap
                    int tmp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = tmp;
                }
                else 
                    continue;
            }
        }
    }
}

// O(N) Approach
class Solution {
    public void sortColors(int[] nums) {
        int l = 0 , m = 0 , r = nums.length - 1 ;
        while(m <= r)
        {
            if(nums[m] == 0) 
            {
                swap(nums , l , m) ;
                l++ ;
                m++ ;
            }
            else if(nums[m] == 1)
            {
                m++ ;
            }
            else 
            {
                swap(nums , m , r) ;
                r-- ;
            }
        }
    }
    private void swap(int[] nums, int i, int j) 
    {
        int tmp = nums[i] ;
        nums[i] = nums[j] ;
        nums[j] = tmp ;
    }
}
