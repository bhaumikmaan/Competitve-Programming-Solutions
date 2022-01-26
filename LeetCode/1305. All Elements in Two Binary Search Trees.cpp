/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode *> st1, st2;
        vector<int> res;
        
        while(root1 || root2 || !st1.empty() || !st2.empty())
        {
            while(root1)
            {
                st1.push(root1);
                root1 = root1->left;
            }
            while(root2)
            {
                st2.push(root2);
                root2 = root2->left;
            }
            if(st2.empty() || (!st1.empty() && st1.top()->val <= st2.top()->val))
            {
                root1 = st1.top();
                st1.pop();
                res.push_back(root1->val);
                root1 = root1->right;
            }
            else
            {
                root2 = st2.top();
                st2.pop();
                res.push_back(root2->val);
                root2 = root2->right;
            }
        }
        return res;
    }
};
