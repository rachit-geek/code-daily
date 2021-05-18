class Solution
{
    public:
    //Function to return the diameter of a Binary Tree.
    int height(Node* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        int l=height(temp->left);
        int r=height(temp->right);
        
        return max(l,r)+1;
    }
    int diameter(Node* root)
    {
    // Your code here
        if(root==NULL)
        {
            return 0;
        }
        int lheight=height(root->left);
        int rheight=height(root->right);
        
        int ldiameter=diameter(root->left);
        int rdiameter=diameter(root->right);
        
        return max(lheight+rheight+1,max(ldiameter,rdiameter));
    }

};