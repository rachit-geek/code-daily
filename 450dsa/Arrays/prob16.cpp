#include<bits/stdc++.h>
using namespace std;
int getmedian(int arr1[],int arr2[],int n)
{
    int i=0,j=0;
    int m1=-1,m2=-1;
    int count;
    for(count=0;count<=n;count++)
    {
        if(i==n)
        {
            m1=m2;m2=arr2[0];
            break;
        }
        if(j==n)
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



int main()
{
    int arr1[]={1,5,9,25};
    int arr2[]={52,58,66,99};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    if(n1==n2)
    {
        cout<<"median possible"<<getmedian(arr1,arr2,n1);
    }
    else
    {
<<<<<<< HEAD
        cout<<"doesn't work";
    }
    return 0;
}f
=======
        cout<<"doesnt work";
    }
    return 0;
}f
>>>>>>> dccd76cb49e3e03318af1721a529ca8c9ca1f7b8
