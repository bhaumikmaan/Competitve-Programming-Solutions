### KNOWLEDGE IS POWER  ###

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.dia = 0
        
        def height(root):
            if not root: 
                return 0
            left, right = height(root.left), height(root.right)
            self.dia = max(self.dia, left + right)
            return 1 + max(left, right)
            
        height(root)
        return self.dia
