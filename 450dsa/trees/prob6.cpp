class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code herevector<int> leftView(Node *root)
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    Node* temp=NULL;
    while(!q.empty())
    {
        int n=q.size();
        for(int i=1;i<=n;i++)
        {
            temp=q.front();
            q.pop();
            if(i==1)
            {
                ans.push_back(temp->data);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
        }
    }
    return ans;
   // Your code here
  
    }
};