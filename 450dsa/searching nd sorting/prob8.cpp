//----------------method 1 naive approach----------------
bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    
    for(int i=0;i<size;i++)
    {
        int k=arr[i];
        for(int j=i+1;j<size;j++)
        {
            if(k+n==arr[j])
            {
                return true;
            
            }
        }
    }
    return false;
    //code
}

//-------------method 2 with better complexity--------------------
// make array sorted first
bool findPair(int arr[], int size, int n) 
{ 
    int i=0;j=1;
    while(i<size and j<size)
    {
        if(i!=j and arr[j]-arr[i]==n)
        {
            return true;
        }
        else if (arr[j]-arr[i]>n)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return false;
