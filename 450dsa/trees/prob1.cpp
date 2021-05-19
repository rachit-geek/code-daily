//Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> ans;
      //Your code here
      if(node==NULL)
      {
          return ans;
      }
      queue<Node*> q;
      q.push(node);
      Node* temp =NULL;
      while(!q.empty())
      {
          temp=q.front();
          ans.push_back(temp->data);
          q.pop();
          if(temp->left!=NULL)
          {
              q.push(temp->left);
          }
          if(temp->right!=NULL)
          {
              q.push(temp->right);
          }
      }
      
      return ans;