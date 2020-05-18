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
    bool isCousins(TreeNode* root, int x, int y) {
        vector<pair<TreeNode*, int>> result;
        
        traverse(root, x, y, nullptr, 0, result);
        
        return (result[0].first != result[1].first && 
               result[0].second == result[1].second);
    }
    
    void traverse(TreeNode* root, int x, int y, TreeNode* parent, int depth, 
                  vector<pair<TreeNode*, int>>& result) {
        if(root == nullptr)
            return;
        
        if(root->val == x)
            result.push_back(make_pair(parent, depth));
        
        if(root->val == y)
            result.push_back(make_pair(parent, depth));
        
        traverse(root->left, x, y, root, depth + 1, result);
        traverse(root->right, x, y, root, depth + 1, result);
        
    }
};
