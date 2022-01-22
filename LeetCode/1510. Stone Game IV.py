###   KNOWLEDGE IS POWER  ###

class Solution:
    @cache
    def winnerSquareGame(self, n: int) -> bool:
        if not n: 
            return False
        for i in reversed(range(1, floor(sqrt(n)) + 1)):
            if not self.winnerSquareGame(n - i**2): 
                return True
        return False
