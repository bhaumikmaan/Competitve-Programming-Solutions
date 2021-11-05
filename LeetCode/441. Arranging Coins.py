### KNOWLEDGE IS POWER  ###

class Solution:
    def arrangeCoins(self, n: int) -> int:
        lo, hi = 1, n
        while lo <= hi:
            mid = (lo+hi)//2
            total = mid*(mid+1)//2
            if total == n:
                return mid
            elif total > n:
                hi = mid-1
            else:
                lo = mid+1
        return hi
