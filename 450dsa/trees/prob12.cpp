class Solution{
  public:
    /*You are required to complete this method*/
    bool checkutil(Node* root,int level,int *leaflevel)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->right == NULL and root->left == NULL)
        {
            if(*leaflevel==0)
            {
                level= *leaflevel;
                return true;
            }
            return (*leaflevel==level);
        }
        return checkutil(root,level+1,leaflevel) and checkutil(root,level+1,leaflevel);
    }
    bool check(Node *root)
    {
        //Your code here
        int level=0,leaflevel=0;
        return checkutil(root,level, &leaflevel);
    }
};