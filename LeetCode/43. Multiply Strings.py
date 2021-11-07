### KNOWLEDGE IS POWER  ###

class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        m, n = map(len, (num1, num2))
        prod = [0] * (m + n)
        for i, a in enumerate(reversed(num1)): 
            for j, b in enumerate(reversed(num2)): 
                prod[i + j] += int(a) * int(b)
                prod[i + j + 1] += prod[i + j] // 10
                prod[i + j] %= 10
        while prod and prod[-1] == 0:
            prod.pop()
        return ''.join(map(str, prod[:: -1])) if prod else '0'
