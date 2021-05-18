class Solution{
    public:
    int cal_height(Node* root)
    {
        if(root == NULL)
        {
            return NULL;
        }
        int lheight=cal_height(root->left);
        int rheight=cal_height(root->right);
        if(lheight>rheight)
        {
            return lheight +1;
        }
        else
        {
            return rheight+1;
        }
    }
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        return cal_height(node);
    }
};