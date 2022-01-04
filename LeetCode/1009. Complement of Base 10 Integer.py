### KNOWLEDGE IS POWER  ###

class Solution(object):
    def bitwiseComplement(self, n):
        """
        :type n: int
        :rtype: int
        """
        return ((2 << int(math.log(max(n, 1), 2))) - 1) ^ n
