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
    public int sumNumbers(TreeNode root) {
        if (root == null) {
            return 0;
        }

        return sumNumbersHelper(root, 0);
    }

    private int sumNumbersHelper(TreeNode node, int curVal) {
        if (node == null) {
            return 0;
        }

        curVal = curVal * 10 + node.val;
        if (node.left == null && node.right == null) {
            return curVal;
        }

        return sumNumbersHelper(node.left, curVal) + sumNumbersHelper(node.right, curVal);
    }
}
