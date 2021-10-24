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
    int countNodes(TreeNode* root) {
        if(!root) 
            return 0;
        int height_left=0, height_right=0;
        TreeNode * tr=root, *tl=root;
        while(tr)
        {
            tr=tr->right ; 
            height_right++ ; 
        }
        while(tl)
        {
            tl=tl->left ;
            height_left++ ;
        }
        if(height_left == height_right) 
            return pow(2,height_right)-1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
