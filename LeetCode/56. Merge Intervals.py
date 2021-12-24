### KNOWLEDGE IS POWER  ###

class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        intervals.sort()
        ans = []
        for [x, y] in intervals:
            if ans:
                if x <= ans[-1][1] < y:
                    ans[-1][1] = y
                elif x > ans[-1][1]:
                    ans.append([x, y])
            else:
                ans.append([x, y])
        return ans
