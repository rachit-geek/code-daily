// to create a mirror of a tree
Node* mirror(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    Node* t=root->left;
    root->left=root->right;
    root->right= t;
    if(root->left)
    {
        mirror(root->left);
    }
    if(root->right)
    {
        mirror(root->right);
    }

    return root;

}

// alt method
void mirrorify(Node* root,Node** mirror)
{
    if(root==NULL)
    {
        mirror=root;
        return;
    }
    *mirror = createNode(root->data);
    mirrorify(root->left,&(*mirror->right));
    mirrorify(root->right,&(*mirror->left));
}
// later on print mirror
