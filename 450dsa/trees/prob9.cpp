// function to print diagonal travesal of a tree
void checkdiagonal(Node* root,int d,map<int,vector<int>> &diag)
{
    if(root==NULL)
    {
        return;
    }
    diag[d].push_back(root->data);
    checkdiagonal(root->left,d+1,diag);
    checkdiagonal(root->right,d,diag);
}
vector<int> diagonal(Node *root)
{
     vector<int> ans;
     if(root==NULL)
     {
         return ans;
     }
   map<int,vector<int> > diag;
   checkdiagonal(root,0,diag);
   
  
   for(auto it : diag)
   {
       vector<int> t=it.second;
      for(int i=0;i<t.size();i++)
      {
          ans.push_back(t[i]);
      }
   }
   return ans;
}