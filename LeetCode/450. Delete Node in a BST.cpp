/***  KNOWLEDGE IS POWER  ***/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root) {
            if (root->val > key)
                root->left = deleteNode(root->left, key);
            else if (root->val < key)
                root->right = deleteNode(root->right, key);
            else {
                if (root->left == root->right)
                    return NULL;
                else if (root->left && root->right) {
                    TreeNode* tmp = root->left;
                    while (tmp->right)
                        tmp = tmp->right;
                    root->val = tmp->val;
                    root->left = deleteNode(root->left, root->val);
                }
                else
                    return root->left ? root->left : root->right;
            }
        }
        return root ;
    }
};
