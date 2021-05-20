// your task is to complete this function
void sumoflongrootutil(Node* root,int sum,int len,int &maxSum,int &maxlen)
{
    if(!root)
    {
        if(maxlen<len)
        {
            maxlen=len;
            maxSum=sum;
        }
        else if(maxlen==len and maxSum<sum)
        {
            maxSum=sum;
        }
        return;
    }
    sumoflongrootutil(root->left,sum+root->data,len+1,maxSum,maxlen);
    sumoflongrootutil(root->right,sum+root->data,len+1,maxSum,maxlen);
    
}
int sumOfLongRootToLeafPath(Node* root)
{
	// Code here
	if(root==NULL)
	{
	    return 0;
	}
	int maxSum=INT_MIN;
	int maxlen=0;
	sumoflongrootutil(root,0,0 ,maxSum,maxlen);
	return maxSum;
}