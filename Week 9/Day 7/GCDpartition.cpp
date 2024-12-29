#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<ll>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        b[0]=a[0];
        for(int i=1;i<n;i++)
        {
            b[i]=b[i-1]+a[i];
        }
        ll ans=0;
        for(int i=1;i<n;i++)
        {
            ll l=b[i-1];
            ll r=b[n-1]-b[i-1];
            ans=max(ans,__gcd(l,r));
        }
        cout<<ans<<endl;
    }
    return 0;
}
