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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;;
        }
        int mx=0;
        for(auto [x,y]:mp)
        {
            mx=max(mx,y);
        }
        int ans=0;
        while(mx<n)
        {
            int a=n-mx;
            int b=mx;
            ans++;
            ans+=min(a,b);
            mx+=min(a,b);
        }
        cout<<ans<<endl;
    }
    return 0;
}
