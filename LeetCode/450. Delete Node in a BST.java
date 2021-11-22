/***  KNOWLEDGE IS POWER  ***/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode deleteNode(TreeNode root, int key) {
        if (root != null) {
            if (root.val > key)
                root.left = deleteNode(root.left, key);
            else if (root.val < key)
                root.right = deleteNode(root.right, key);
            else {
                if (root.left == root.right)
                    return null;
                else if (root.left != null && root.right != null) {
                    TreeNode tmp = root.left;
                    while (tmp.right != null)
                        tmp = tmp.right;
                    root.val = tmp.val;
                    root.left = deleteNode(root.left, root.val);
                }
                else
                    return root.left != null ? root.left : root.right;
            }
        }
        return root;
    }
}
