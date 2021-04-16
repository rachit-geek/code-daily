//---optimized method but not working-----------
class Solution{
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long int count=0;
	    sort(arr,arr+n);
	    for(long long int i=0;i<n-2;i++)
	    {
	        long long int l=i+1;
	        long long int r=n-1;
	        while(l<r)
	        {
	            if(arr[i]+arr[l]+arr[r]>=sum)
	            {
	                r--;
	               
	            }
	            else
	            {
	                l++;
	                count+=r-l;
	            }
	           
	        }
	    }
	    return count;
	}
		 

};
// naive solution for the same is-----------

long long countTriplets(long long arr[], int n, long long sum)
{
    int count=0;
    for(long long i=0;i<n-2;i++)
    {
        for(long long j=i+1;j<n-1;j++)
        {
            for(long long k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]<sum)
                {
                    count++;
                }
            }
        }
    }

    return count;
}
