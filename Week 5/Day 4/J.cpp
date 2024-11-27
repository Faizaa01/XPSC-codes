#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<pair<int,char>> f(26);
        for(int i=0;i<26;i++)
        {
            f[i].second = i+'a';
        }
        for(char c:s)
        {
            f[c-'a'].first++;
        }
        sort(f.rbegin(),f.rend());
        string ans(n,' ');
        int k=0;
        for(auto [x,y]:f)
        {
            if(x!=0)
            {
                for(int i=0;i<x;i++)
                {
                    if(k>=n)
                    {
                        k=1;
                    }
                    ans[k]=y;
                    k+=2;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
