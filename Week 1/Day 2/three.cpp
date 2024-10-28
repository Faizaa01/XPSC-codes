#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin>>S;
    int cnt[26]={0};
    for(int c:S)
    {
        cnt[c-'a']++;
    }
    bool yo=false;
    for(int i=0;i<26;i++)
    {
        if(cnt[i]==0)
        {
            yo=true;
            cout<<char(i+'a');
            break;
        }
    }
    if(!yo) cout<<"None";
    return 0;
}