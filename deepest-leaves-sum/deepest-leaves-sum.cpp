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
    int summer(TreeNode *root,int d,int cnt){       
        if(!root){
            return 0;
        }
        if(cnt==d-1){
            return root->val;
        }
        return summer(root->left,d,cnt+1)+summer(root->right,d,cnt+1);
    }
    int Depth(TreeNode *root){
        if(!root)return 0;
        return 1 + max(Depth(root->left),Depth(root->right));
    }
    int deepestLeavesSum(TreeNode* root) {
        int max_depth = Depth(root);
        return summer(root,max_depth,0);
    }
};