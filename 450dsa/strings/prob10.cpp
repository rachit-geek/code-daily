#include<bits/stdc++.h>
using namespace std;
string printsequence(string input1,string str[])
{
    string output="";
    int n=input1.length();
    for(int i=0;i<n;i++)
    {
        if(input1[i]==' ')
        {
            output+='0';
        }
        else
        {
            int position=input1[i]-'A';
            output+=str[i];
        }
    }
    return output;
}

int main()
{
    string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };

    string input1;
    cin>>input1;
    cout<<printsequence(input1,str);
    return 0;
}