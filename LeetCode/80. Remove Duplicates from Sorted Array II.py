###  KNOWLEDGE IS POWER  ###

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        for e in nums:
            if i < 2 or e > nums[i-2]:
                nums[i] = e
                i += 1 
        return i 
