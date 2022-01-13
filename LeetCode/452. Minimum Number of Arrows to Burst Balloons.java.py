### KNOWLEDGE IS POWER  ###

class Solution(object):
    def findMinArrowShots(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        points.sort(key=lambda p: p[1])
        ans, arrow = 0, 0
        for [x, y] in points:
            if ans == 0 or x > arrow:
                ans, arrow = ans + 1, y
        return ans
