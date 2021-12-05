/***  KNOWLEDGE IS POWER  ***/

class Solution {
private:
    pair<int,int> max_money_robbed(TreeNode* root){
        
        if(root==NULL)return {0,0};
        
        pair<int,int>left = max_money_robbed(root->left);
        pair<int,int>right = max_money_robbed(root->right);
        
        int root_house_robbed = left.second + right.second + root->val;
        int root_house_not_robbed = max(left.first,left.second)+ max(right.first,right.second);
        
        pair<int,int>ans;
        
        ans.first = root_house_robbed, ans.second = root_house_not_robbed;
        
        return ans;
        
    }
public:
    int rob(TreeNode* root) {
        pair<int,int>result = max_money_robbed(root);
        return max(result.first,result.second);
    }
};
