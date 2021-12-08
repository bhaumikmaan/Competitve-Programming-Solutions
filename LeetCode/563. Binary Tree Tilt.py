###  KNOWLEDGE IS POWER  ###

class Solution(object):
    def findTilt(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.tilt_sum = 0
        def dfs(root):
            if not root: return 0
            left_sum, right_sum = dfs(root.left), dfs(root.right)
            self.tilt_sum += abs(left_sum - right_sum)
            return left_sum + right_sum + root.val
        dfs(root)
        return self.tilt_sum
