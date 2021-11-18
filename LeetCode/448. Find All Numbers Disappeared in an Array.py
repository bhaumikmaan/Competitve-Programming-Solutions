###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        s = Counter(nums)
        return [i for i in range(1, len(nums)+1) if i not in s]
