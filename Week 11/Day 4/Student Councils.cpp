#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n;
    cin>>k>>n;
    ll sum=0;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    auto ok = [&](ll mid)
    {
        ll council=mid*k;
        for(auto x:a)
        {
            council -= min(mid,x);
        }
        return (council<=0);
    };

    ll l=0,r=sum/k+10;
    while(l+1<r)
    {
        ll mid=l+(r-l)/2;
        if(ok(mid))
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    cout << l << endl;
    return 0;
}
