###  KNOWLEDGE IS POWER  ###

class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        odd, even = 0, 0
        for i in position:
            if i % 2 == 0:
                even += 1
            else:
                odd += 1
        return min(odd, even)
