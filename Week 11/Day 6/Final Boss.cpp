#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        ll h,n;
        cin>>h>>n;
        vector<ll> a(n),c(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        auto ok=[&](ll mid)
        {
            ll x=0;
            for(int i=0;i<n;i++)
            {
                ll y = (mid+c[i]-1)/c[i];
                x += (y*a[i]);
                if(x>=h)  return true;
            }
            return false;
        };

        ll l=1,r=1e12,ans=0;
        while(l<=r)
        {
            ll mid = l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
