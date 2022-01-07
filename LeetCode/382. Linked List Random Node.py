### KNOWLEDGE IS POWER  ###

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
import random
class Solution:

    def __init__(self, head: ListNode):
        
        self.head = head

    def getRandom(self) -> int:
        
        curr = self.head
        res = 0
        index = 1
        
        while curr:
            if random.random() < (1/index):
                res = curr.val
            
            index += 1
            curr = curr.next
        
        return res
    
# Your Solution object will be instantiated and called as such:
# obj = Solution(head)
# param_1 = obj.getRandom()
