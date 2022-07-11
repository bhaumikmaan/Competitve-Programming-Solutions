/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<int> ans ;
    void dfs(TreeNode* root , int depth)
    {
        if(root == NULL)
        {
            return ;
        }
        if(depth == ans.size())
        {
            ans.push_back(root->val) ;
        }
        dfs(root->right , depth + 1) ;
        dfs(root->left , depth + 1) ;
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root , 0) ;
        return ans ;
    }
};
