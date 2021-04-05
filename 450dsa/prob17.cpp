#include<bits/stdc++.h>
using namespace std;
int getmedian(int arr1[],int arr2[],int n1,int n2)
{
    int i=0,j=0;
    int count;
    int m1=-1,m2=-1;
    if((n1+n2)%2==1)
    {
        for(count=0;count<=(n1+n2)/2;count++)
        {
            if(i!=n1 and j!=n2)
            {
                m1=(arr1[i]>arr2[j]) ? arr2[j++]:arr1[i++];
            }
            else if(i<n1)
            {
                m1=arr1[i++];
            }
            else
            {
                m1=arr2[j++];
            }
        }
        
        return m1;
        
    }
    else
    {
        for(count=0;count<=(n1+n2)/2;count++)
    {
        if(i==n1)
        {
            m1=m2;m2=arr2[0];
            break;
        }
        if(j==n2)
        {
            m1=m2;
            m2=arr1[0];
            break;
        }
        if(arr1[i]<arr2[j])
        {
            m1=m2;
            m2=arr1[i];
            i++;
        }
        else
        {
            m1=m2;
            m2=arr2[j];
            j++;
        }
    }

    return (m1+m2)/2;
    }
    
}



int main()
{
    int arr1[]={1,5,9,25};
    int arr2[]={52,58,66,99,101};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
     cout<<"median possible"<<getmedian(arr1,arr2,n1,n2);
    return 0;
}