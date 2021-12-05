###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def rob(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        def dfs(root):
            if not root: return (0, 0)
            L, R = dfs(root.left), dfs(root.right)
            return (max(L) + max(R), root.val + L[0] + R[0])
        return max(dfs(root))
