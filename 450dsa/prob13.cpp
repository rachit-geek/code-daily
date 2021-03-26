class Solution {
public:
    int getpaircount(int arr[],int n,int k)
    {
        int c=0;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            c+=m[k-arr[i]];

            if(k-arr[i]==arr[i])
            {
                c--;
            }
        }

        return c/2;
    }
};