/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int ans = 0;
    int findTilt(TreeNode* root) {
        dfs(root);
        return ans ;
    }
    int dfs(TreeNode* root) {
        if(!root) 
            return 0 ;
        int left = dfs(root -> left);
        int right = dfs(root -> right) ;
        ans += abs(left - right);       
        return left + right + root->val ;
    }
};
