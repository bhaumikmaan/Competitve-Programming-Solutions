###  KNOWLEDGE IS POWER  ###

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 10000 
        ans = 0 
        p = 0
        for i in prices:
            if i < l:
                l = i
            p = i - l 
            if ans < p:
                ans = p 
        return ans 
