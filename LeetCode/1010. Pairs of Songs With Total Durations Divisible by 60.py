###  KNOWLEDGE IS POWER   ###

class Solution(object):
    def numPairsDivisibleBy60(self, time):
        """
        :type time: List[int]
        :rtype: int
        """
        m = [0] * 60
        ans = 0
        for x in time:
            ans += m[-x % 60]
            m[x % 60] += 1
        return ans
