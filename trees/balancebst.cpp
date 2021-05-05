/**
 * Definition for a binary tree node. // data structure
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
    TreeNode* balanceBST(TreeNode* root) {
        
        return build(root);
    }
        
    TreeNode* build(TreeNode* root)
    {
        vector<TreeNode*> nodes;
        copyinorder(root,nodes);
        
        int n=nodes.size();
         return convertbst(nodes,0,n-1);
    }
        
    void copyinorder(TreeNode* root,vector<TreeNode*> &nodes)
    {
        if(root==NULL)
        {
            return;
        }
        copyinorder(root->left,nodes);
        nodes.push_back(root);
        copyinorder(root->right,nodes);
    }
        
        TreeNode* convertbst(vector<TreeNode*> &nodes,int start,int end)
        {
            if(start>end)
            {
                return NULL;
            }
            int mid=(start+end)/2;
            TreeNode* root=nodes[mid];
            
            root->left=convertbst(nodes,start,mid-1);
            root->right=convertbst(nodes,mid+1,end);
            
            return root;
        }
        
    
};
