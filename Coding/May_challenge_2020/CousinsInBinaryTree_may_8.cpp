/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode *xParent = NULL;
    TreeNode *yParent = NULL;
    int xHeight = -1;
    int yHeight = -2;
    
    
private:
    void dfs(TreeNode* root, TreeNode* parent, int x, int y, int height){
        if(root == NULL){
            return;
        }
        if(root->val==x){
            xParent = parent;
            xHeight = height+1;
        }
        if(root->val==y){
            yParent = parent;
            yHeight = height+1;
        }
        dfs(root->left,root,x,y,height+1);
        dfs(root->right,root,x,y,height+1);
        
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,NULL,x,y,0);
        if(xHeight == yHeight && xParent!=yParent) return true;
        return false;
        
    }
};