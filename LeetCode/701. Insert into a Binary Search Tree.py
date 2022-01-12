### KNOWLEDGE IS POWER  ###

class Solution(object):
    def insertIntoBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        if root is None: 
            return TreeNode(val) 
        if root.val > val:  
            root.left = self.insertIntoBST(root.left, val)
        else: 
            root.right = self.insertIntoBST(root.right, val)
        return root
