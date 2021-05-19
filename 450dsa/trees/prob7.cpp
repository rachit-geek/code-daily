// method one for zig zag tree order traversal
vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int> ans;
	if(root==NULL)
	{
	    return ans;
	}
	stack<Node* > next;
	stack<Node* > curr;
	Node* temp=NULL;
	bool leftoright=true;
	curr.push(root);
	while(!curr.empty())
	{
	    temp=curr.top();
	    curr.pop();
	    if(temp){
	    ans.push_back(temp->data);
	    if(leftoright)
	    {
	        if(temp->left)
	        {
	            next.push(temp->left);
	        }
	        if(temp->right)
	        {
	            next.push(temp->right);
	        }
	    }
	    else
	    {
	        if(temp->right)
	        {
	            next.push(temp->right);
	        }
	        if(temp->left)
	        {
	            next.push(temp->left);
	        }
	    }
	    
	    }
	    while(curr.empty())
	    {
	        leftoright=!leftoright;
	        swap(next,curr);
	    }
	}
	
	return ans;
	
}   
/// method 2 more optimizw
vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int> ans;
	deque<Node* > q;
	q.push_back(root);
	ans.push_back(root->data);
	Node* temp;
	int l=1;
	while(!q.empty())
	{
	    int n=q.size();
	    for(int i=0;i<n;i++)
	    {
	        if(l%2==0)
	        {
	            temp=q.back();q.pop_back();
	        }
	        else
	        {
	            temp=q.front();
	            q.pop_front();
	        }
	        // pushing mechanism
	        if(l%2!=0)
	        {
	            if(temp->right)
	            {
	                q.push_back(temp->right);
	                ans.push_back(temp->right->data);
	            }
	            if(temp->left)
	            {
	                q.push_back(temp->left);
	                ans.push_back(temp->left->data);
	            }
	        }
	        else if(l%2==0)
	        {
	             if(temp->left)
	            {
	                q.push_front(temp->left);
	                ans.push_back(temp->left->data);
	            }
	             if(temp->right)
	            {
	                q.push_front(temp->right);
	                ans.push_back(temp->right->data);
	            }
	        }
	    }
	    l++;
	}
	return ans;

	
}   