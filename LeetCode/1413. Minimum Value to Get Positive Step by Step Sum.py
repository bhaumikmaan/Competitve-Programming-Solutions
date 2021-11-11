### KNOWLEDGE IS POWER  ###

class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        return -min(0, min(accumulate(nums))) + 1
