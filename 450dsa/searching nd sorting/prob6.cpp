int majorityElement(int a[], int size)
{
    map<int,int> mp;
    int k=size/2;
    for(int i=0;i<size;i++)
    {
        mp[a[i]]++;
    }
    for(auto it :mp)
    {
        if(it.second >=k+1)
        {
            return it.first;
            break;
        }
            
    }
    return -1;
        // your code here
        
    }
};