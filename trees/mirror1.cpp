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
    bool isSymmetric(TreeNode* root) {
        return IsMirror(root,root);
    } 
        bool IsMirror(TreeNode* t1,TreeNode* t2)
        {
            if(t1==NULL and t2==NULL)
                return true;
            if(t1==NULL or t2==NULL)
                return false;
            if(t1->val==t2->val)
            {
                return IsMirror(t1->left,t2->right) && IsMirror(t1->right,t2->left);

            }
            return false;
        }
        
    
};
