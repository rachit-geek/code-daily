vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    stack<int> s;
    queue<Node*> q;
    if(root== NULL)
    {
        return ans;
    }
    q.push(root);
    Node* temp=NULL;
    while(!q.empty())
    {
        temp=q.front();
        s.push(temp->data);
        q.pop();
        if(temp-> right!=NULL)
        {
            q.push(temp->right);
        }
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
    }
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}