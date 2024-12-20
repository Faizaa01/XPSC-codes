#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(int n,vector<int>v)
{
    ll one=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1) one++;
        else cnt+=one;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        ll ans=solve(n,v);
        int idx = -1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                v[i] = 1;
                idx = i;
                break;
            }
        }
        ans = max(ans,solve(n,v));

        if(idx!=-1) v[idx]=0;

        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                v[i] = 0;
                idx = i;
                break;
            }
        }
        ans = max(ans,solve(n,v));

        cout<<ans<<endl;
    }
    return 0;
}
