### KNOWLEDGE IS POWER  ###

class Solution(object):
    def maxProduct(self, nums):
        curMin, curMax, ans = nums[0], nums[0], nums[0]
        for i in range(1, len(nums)):
            tmp = curMax
            curMax = max(nums[i], nums[i]*tmp, nums[i]*curMin)
            curMin = min(nums[i], nums[i]*tmp, nums[i]*curMin)
            if curMax > ans:
                ans = curMax
        return ans
