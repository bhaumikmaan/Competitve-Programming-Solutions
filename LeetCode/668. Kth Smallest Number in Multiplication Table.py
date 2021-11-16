### KNOWLEDGE IS POWER  ###

class Solution(object):
    def findKthNumber(self, m, n, k):
        """
        :type m: int
        :type n: int
        :type k: int
        :rtype: int
        """
        def count(x):
            return sum(min(x//i, n) for i in range(1,m+1))
			
        L, R, mid, ans = 0, m*n, 0, 0
        while L <= R:
            mid = (L + R) >> 1
            if count(mid) < k:
                L = mid + 1
            else:
                R, ans = mid - 1, mid
        return ans
