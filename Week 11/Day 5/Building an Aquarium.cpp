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
        int n,x;
        cin>>n>>x;

        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        auto ok=[&](ll mid)
        {
            ll total=0;
            for(auto val:a)
            {
                if(val<mid)
                {
                    total += (mid-val);
                }
            }
            return total<=x;
        };

        ll l=1,r=2e9,ans=0;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;

            if(ok(mid))
            {
                ans=mid;
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
