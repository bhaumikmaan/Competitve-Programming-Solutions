### KNOWLEDGE IS POWER  ###

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        s0 = 0
        h1 = s1 = h2 = s2 = float('-inf')
        for p in prices:
            h1, s1, h2, s2 = max(h1, s0 - p), max(s1, h1 + p), max(h2, s1 - p), max(s2, h2 + p)
        return max(s0, s1, s2)
