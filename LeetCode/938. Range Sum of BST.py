###  KNOWLEDGE IS POWER  ###

class Solution:
	def __init__(self):
		self.sum = 0
	def rangeSumBST(self, root: TreeNode, low: int, high: int) -> int:
		if root is None:
			return 
		if root.val >= low and root.val <= high:
			self.sum += root.val

		self.rangeSumBST(root.left, low, high)
		self.rangeSumBST(root.right, low, high)

		return self.sum
