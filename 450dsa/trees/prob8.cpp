// balance tree
//Function to check whether a binary tree is balanced or not.
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)
    {
        return 1;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    
    if(abs(lh-rh)<=1 and isBalanced(root->left) && isBalanced(root->right))
    {
        return 1;
    }
    
    return 0;
}