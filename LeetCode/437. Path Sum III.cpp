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
    unordered_map<int, int> map;
    int count = 0;
    void countPathSum(TreeNode* root, int target, int sum){
        if(!root)
            return ;
        sum += root->val ;
        if(sum == target)
            count++;
        if(map.find(sum - target) != map.end())
            count += map[sum - target];
        map[sum]++ ;
        countPathSum(root->left, target, sum) ;
        countPathSum(root->right, target, sum) ;
        map[sum]-- ;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        countPathSum(root, targetSum, 0);
        return count;
    }
};
