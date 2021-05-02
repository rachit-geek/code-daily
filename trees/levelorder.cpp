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
// trees level order traversal
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        queue<TreeNode*> q;
        if(!root)
            return ans;
        TreeNode* curr;
        q.push(root);
        while(!q.empty())
        {
            vector<int> v;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                  curr=q.front();
                    v.push_back(curr->val);
                    q.pop();
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
          
            
            ans.push_back(v);
        }
        return ans;
        
    }
};
