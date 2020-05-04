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
    
private:
    int path(TreeNode* root,int sum){
        if(root == NULL) return 0;
        //if(sum == root->val) return 1;
        //if(sum < 0 ) return 0;
        
        
        return (root->val == sum ? 1 : 0)+path(root->left,sum-root->val)+path(root->right,sum-root->val);
    }
public:
    int pathSum(TreeNode* root, int sum) {
       if(root == NULL) {
           return 0;
       }
       return path(root,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
        
    }
};