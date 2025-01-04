#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<ll> a(n+1);
        vector<ll> pre(n+1);
        vector<ll> v(n+1);
        for (int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for (int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+a[i];
            v[i]=max(v[i-1],a[i]);
        }

        for(int i=0;i<q;i++)
        {
            ll ans =0;
            ll k;
            cin>>k;
            int x= upper_bound(v.begin(),v.end(),k) - v.begin()-1;
            if(x>=0)
            {
                ans=pre[x];
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}
