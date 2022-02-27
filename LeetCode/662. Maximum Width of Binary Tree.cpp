/***  KNOLWEDGE IS POWER  ***/
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        int res = 1;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0}) ;
        while(!q.empty())
        {
            int sz = q.size() , start = q.front().second , end = q.back().second ;
            res = max(res , end - start + 1) ;
            for(int i = 0; i < sz ; i++)
            {
                pair<TreeNode*, int> p = q.front() ;
                int idx = p.second - start ;
                q.pop() ;
                if(p.first->left)
                    q.push({p.first->left, (long long)2 * idx + 1});
                if(p.first->right)
                    q.push({p.first->right, (long long) 2 * idx + 2});
            }
        }
        
        return res;
    }
};
