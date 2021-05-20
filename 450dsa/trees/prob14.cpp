class Solution{
    public:
    int search(int in[],int str,int end,int data)
    {
        int i;
        for(i=str;i<=end;i++)
        {
            if(in[i]==data)
            {
                return i;
            }
        }
        return i;
    }
    
    Node* post(int in[],int pre[],int str,int end)
    {
        int preIndex=0;
        if(str> end)
        {
            return NULL;
        }
        
        Node* temp = new Node(pre[preIndex++]);
        
        if(str== end)
        {
            return temp;
        }
        int inIndex=search(in,str,end,temp->data);
        temp->left=post(in,pre,str,inIndex-1);
        temp->right=post(in,pre,inIndex+1,end);
        return temp;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        Node* tmp;
       tmp= post(in,pre,0,n-1);
       return tmp;
    }
};