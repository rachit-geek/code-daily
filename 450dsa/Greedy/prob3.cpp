#include<bits/stdc++.h>
using namespace std;
struct Meeting{
    int start;
    int end;
    int posi;
};
bool compare(Meeting m1,Meeting m2)
{
    return m1.end<m2.end;
}
void maxMeeting(int s[],int f[],int n)
{
    struct Meeting m[n];
    for(int i=0;i<n;i++)
    {
        m[i].start=s[i];
        m[i].end=f[i];
        m[i].posi=i+1;
    }
    sort(m,m+n,compare);
    vector<int> ans;
    ans.push_back(m[0].posi);
    int finish=m[0].end;
    for(int i=1;i<n;i++)
    {
        if(m[i].start>=finish)
        {
            ans.push_back(m[i].posi);
            finish=m[i].end;
        }
    }


    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<' ';
    }

}
int main()
{
    // Starting time
    int s[] = { 1, 3, 0, 5, 8, 5 };
     
    // Finish time
    int f[] = { 2, 4, 6, 7, 9, 9 };
     
    // Number of meetings.
    int n = sizeof(s) / sizeof(s[0]);
 
    // Function call
    maxMeeting(s, f, n);
 
    return 0;
}