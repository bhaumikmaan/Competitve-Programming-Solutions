### KNOWLEDGE IS POWER  ###

class Solution:
    def maxProfit(self, P: List[int]) -> int:
        return sum(P[i]-P[i-1] if P[i] > P[i-1] else 0 for i in range(1, len(P)))
