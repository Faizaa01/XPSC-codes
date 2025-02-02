#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >>n>>m>>k;
    vector<ll>a(n+1),d(m+2,0),ans(n+2,0);
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    vector<pair<int,int>>v(m+1);
    vector<ll>b(m+1);
    for(int i=1;i<=m;i++)
    {
        int l,r,dd;
        cin>>l>>r>>dd;
        v[i]={l,r};
        b[i]=dd;
    }
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        d[x]++;
        d[y+1]--;
    }
    for (int i=1;i<=m;i++)
    {
        d[i] = d[i]+d[i-1];
        b[i] = b[i]*d[i];
    }
    for (int i=1;i<=m;i++)
    {
        int l = v[i].first, r = v[i].second;
        ans[l] += b[i];
        ans[r+1] -= b[i];
    }
    for(int i=1;i<=n;i++)
    {
        ans[i] = ans[i]+ans[i-1];
        cout<<ans[i]+a[i]<<" ";
    }
    cout << endl;
    return 0;
}
