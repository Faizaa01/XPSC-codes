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
        int n,k;
        cin>>n>>k;

        auto ok=[&](ll mid, ll k)
        {
            return (mid * (2*k+mid-1)) / 2;
        };

        ll l=1,r=n,ans=1e18;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            ll x1 = ok(mid,k);
            ll x2 = ok(n-mid,k+mid);
            ans = min(ans,abs(x1-x2));
            if(x2>=x1)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
