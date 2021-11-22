###  KNOWLEDGE IS POWER ###

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if root:
            if root.val > key:
                root.left = self.deleteNode(root.left, key)
            elif root.val < key:
                root.right = self.deleteNode(root.right, key)
            else:
                if root.left == root.right:
                    root = None
                elif root.left and root.right:
                    tmp = root.left
                    while tmp.right:
                        tmp = tmp.right
                    root.val = tmp.val
                    root.left = self.deleteNode(root.left, root.val)
                else:
                    root = root.left if root.left else root.right
        return root
