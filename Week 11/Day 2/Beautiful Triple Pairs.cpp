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
        ll n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans=0;
        map<tuple<ll,ll,ll>,ll>m;
        for(int i=0;i<n-2;i++)
        {
            ll x = m[{v[i],v[i+1],0}] + m[{0,v[i+1],v[i+2]}] + m[{v[i],0,v[i+2]}];
            ans += x - 3*m[{v[i],v[i+1],v[i+2]}];
            m[{v[i],v[i+1],0}]++;
            m[{0,v[i+1],v[i+2]}]++;
            m[{v[i],0,v[i+2]}]++;
            m[{v[i],v[i+1],v[i+2]}]++;
        }
        cout<< ans <<endl;
    }
    return 0;
}
