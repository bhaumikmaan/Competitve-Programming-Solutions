###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def smallestRepunitDivByK(self, k):
        """
        :type k: int
        :rtype: int
        """
        hit, n, ans = [False] * k, 0, 0
        while True:
            ans = ans + 1
            n =(n * 10 + 1) % k  
            if n == 0: 
                return ans
            if hit[n]: 
                return -1
            hit[n] = True
