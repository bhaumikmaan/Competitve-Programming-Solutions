###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        curr_sum, curr_max = 0 , max(nums)
        for num in nums:
            curr_sum = max(0 , curr_sum + num)
            curr_max = max(curr_max, curr_sum)
        return curr_max if curr_max > 0 else max(nums) 
    
