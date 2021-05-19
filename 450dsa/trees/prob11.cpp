class Solution
{
    public:
    int isSum(Node* root)
    {
        if(!root)
        {
            return 0;
        }
        return root->data+isSum(root->left)+isSum(root->right);
    }
    bool isSumTree(Node* root)
    {
         // Your code 
         
         if(root==NULL || root->left==NULL and root->right==NULL )
         {
             return 1;
         }
         int ls=0;int rd=0;
         ls=isSum(root->left);
         rd=isSum(root->right);
         
         if(root->data==ls+rd and isSumTree(root->left) and isSumTree(root->right))
         {
             return 1;
         }
         else
         {
             return 0;
         }
         
    }
};