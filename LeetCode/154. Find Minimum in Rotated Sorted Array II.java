/***  KNOWLEDGE IS POWER  ***/

class Solution {
    public int findMin(int[] nums) {
        int left = 0, right = nums.length - 1 ;
        while (left < right) {
            final int mid = left + (right - left) / 2;
            if(nums[mid] > nums[right]) 
            {
                left = mid + 1;
            }
            else if(nums[mid] > nums[left]) 
            {
                right = mid - 1;
            } 
            else 
            {
                right--;
            }
        }
        
        return nums[left];
    }
}
