###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n and not (n & n - 1)
