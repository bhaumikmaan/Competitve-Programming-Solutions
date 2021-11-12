### KNOWLEDGE IS POWER  ###

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeElements(self, head, T):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        if not head: 
            return None
        head.next = self.removeElements(head.next, T);
        return head.next if head.val == T else head
        
