###   KNOWLEDGE IS POWER  ###

class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        result = 0
        for num in nums:
            result ^= num
        return result
