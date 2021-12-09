###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def canReach(self, arr, start):
        """
        :type arr: List[int]
        :type start: int
        :rtype: bool
        """
        if start < 0 or start >= len(arr) or arr[start] < 0: 
            return False 
        arr[start] *= -1;
        return arr[start] == 0 or self.canReach(arr, start + arr[start]) or self.canReach(arr, start - arr[start])
