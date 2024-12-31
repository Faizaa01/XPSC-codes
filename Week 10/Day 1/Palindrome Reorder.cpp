#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char,int>m;
    for(auto c:s)
    {
        m[c]++;
    }
    int cnt=0;
    char mid;
    for(auto x:m)
    {
        if(x.second%2)
        {
            mid=x.first;
            cnt++;
        }
    }
    if((s.size()%2==0 && cnt>0) || cnt>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        string ans="";
        for(auto x:m)
        {
            for(int i=1;i<=x.second/2;i++)
            {
                ans+=x.first;
            }
        }
        cout<<ans;
        if(s.size()%2) cout<<mid;
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
    return 0;
}

