vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ans.push_back(i);
            flag++;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            ans.push_back(i);
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
}