### KNOWLEDGE IS POWER  ###

class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        mask, tmp = 0, num
        while tmp:
            mask = (mask << 1) | 1
            tmp >>= 1
        return mask ^ num
