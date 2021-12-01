### KNOWLEDGE IS POWER  ###

class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def get_dp(i):
            return dp[i] if i >= 0 else 0

        def get_nums(i):
            return nums[i] if i >= 0 else 0

        dp = [0] * (len(nums))
        for i in range(len(nums)):
           dp[i] = max(get_nums(i) + get_dp(i - 2), get_nums(i - 1) + get_dp(i - 3))
        return dp[-1]
