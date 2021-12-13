### KNOWLEDGE IS POWER  ###

class Solution(object):
    def maxPower(self, s):
        """
        :type s: str
        :rtype: int
        """
        longest = 0
        count = 0
        prev = None
        for i, c in enumerate(s):
            if c == prev:
                count += 1                
            else:
                longest = max(longest, count)
                prev = c          
                count = 1                
        return max(longest, count) # If iteration reaches end & else condition isn't satisfied
