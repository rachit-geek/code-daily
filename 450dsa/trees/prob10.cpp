class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int f(Node* node)
    {
         if(node == NULL)
        {
            return 0;
        }
        int old=node->data;
        int newdl=f(node->left);
        int newdr= f(node->right);
        node->data=newdl+newdr;
        return old + node->data;
    }
    void toSumTree(Node *node)
    {
        // Your code here
       f(node);
    }
};