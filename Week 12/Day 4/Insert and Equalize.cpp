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
        int n;
        cin>>n;
        vector<ll> a(n);
        map<ll,ll>m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a.begin(),a.end());
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }

        ll x=a[n-1]-a[n-2];
        for(int i=n-3; i>=0; i--)
        {
            x=__gcd(x,a[n-1]-a[i]);
        }

        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ans+=(a[n-1]-a[i])/x;
        }

        ll last=a[n-1];
        while(m.find(last)!=m.end())
        {
            last-=x;
        }
        ans += (a[n-1]-last)/x;

        cout<<ans<<endl;
    }
    return 0;
}

