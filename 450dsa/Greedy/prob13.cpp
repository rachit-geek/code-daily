#include<bits/stdc++.h.
using namespace std;
#define n 2
#define m 5
int maxstop(int arr[])
{
    vector<pair<int,int>> v;
    int count=0;
    for(int i=0;i<m;i++)
    {
        v[arr[i][2]].push_back(arr[i][1],arr[i][0]);
    }
    for(int i=0;i<n;i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    for(int i=0;i<n;i++)
    {
        if(v[i].size()==0)
        {
            continue;
        }
        count++;
        int x=0;
        for(int j=1;j<v[i].size();j++)
        {
            if(v[i][j].second>=v[i][x].first)
            {
                count++;
                x=j;    
            }
        }
    }
    return count;
}
int main()
{
    int arr[m][3] = { 1000, 1030, 1,
                      1010, 1020, 1,
                      1025, 1040, 1,
                      1130, 1145, 2,
                      1130, 1140, 2 };
    cout << "Maximum Stopped Trains = "
         << maxStop(arr);
    return 0;
}