### KNOWLEDGE IS POWER  ###

class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        summ = sum(nums)
        if summ%2 != 0: 
            return False
        sz = int(summ/2) 
        if sz in nums:  # If Element sum already in array
            return True
        n = len(nums)
        st = set([nums[0]])     # set to generate all subset sums
        for i in range(1, n):
            for j in list(st):
                if nums[i] + j == sz:     # found subset sum
                    return True
                st.add(nums[i]+j)
        return sz in st    
