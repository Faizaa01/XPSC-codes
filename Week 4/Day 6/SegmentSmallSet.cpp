#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int l=0,r=0;
    ll ans=0;
    map<ll,ll>m;
    while(r<n)
    {
        m[a[r]]++;
        if(m.size() <= k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(m.size()>k && l<=r)
            {
                m[a[l]]--;
                if(m[a[l]]==0) m.erase(a[l]);
                l++;
            }
            if(m.size() <= k)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}
