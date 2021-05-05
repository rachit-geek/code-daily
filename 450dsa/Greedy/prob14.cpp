 int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1,j=0,result=1,platform=1;
    	while(i<n and j<n)
    	{
    	    if(arr[i]<=dep[j])
    	    {
    	        platform++;
    	        i++;
    	    }
    	    else if (arr[i]>dep[j])
    	    {
    	        platform--;
    	        j++;
    	    }
    	    if(platform>result)
    	    {
    	        result=platform;
    	    }
    	}
    
        return result;
     
    }
    
};