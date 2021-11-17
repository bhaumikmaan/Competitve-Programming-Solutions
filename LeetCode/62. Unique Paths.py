###  KNOWLEDGE IS POWER ###

class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        return factorial(m+n-2) // factorial(m-1) // factorial(n-1)
