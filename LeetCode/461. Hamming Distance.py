### KNOWLEDGE IS POWER  ###

class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        value = str(bin(x^y))
        return(value.count('1'))
