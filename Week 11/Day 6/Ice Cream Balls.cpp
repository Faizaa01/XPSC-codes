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
        ll n;
        cin>>n;

        auto ok=[&](ll mid)
        {
            ll x = mid*(mid-1)/2;
            return x<=n;
        };

        ll l=1,r=2e10,ans=1;
        while(l<=r)
        {
            ll mid = l+(r-l)/2;
            if(ok(mid))
            {
                ans= max(ans,mid);
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        ll x=ans*(ans-1)/2;
        cout<<ans+(n-x)<<endl;
    }
    return 0;
}
