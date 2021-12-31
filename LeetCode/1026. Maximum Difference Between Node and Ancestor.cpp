/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int maxAncestorDiff(TreeNode* root, int mini = INT_MAX, int maxi = INT_MIN) {
        if (!root) 
            return (maxi - mini);
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);
        return max(maxAncestorDiff(root->left, mini, maxi), maxAncestorDiff(root->right, mini, maxi)) ;
    }
};
