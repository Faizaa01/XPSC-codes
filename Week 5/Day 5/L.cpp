#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll x=v[n-2];
        for(int i=0;i<n-2;i++)
        {
            x-=v[i];
        }
        ll ans=v[n-1]-x;
        cout<<ans<<endl;
    }
    return 0;
}
