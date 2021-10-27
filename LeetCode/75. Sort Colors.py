### KNOWLEDGE IS POWER  ###

class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        for i in range(0, len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[j] < nums[i]:
                    tmp = nums[i]
                    nums[i] = nums[j]
                    nums[j] = tmp
                else:
                    continue 
