#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,c,q;
        string s;
        cin>>n>>c>>q>>s;
        vector<pair<ll,ll>> a(c),v(c);
        ll x=n;
        for(int i=0;i<c;i++)
        {
            ll l,r;
            cin>>l>>r;
            a[i] = {l,r};
            v[i] = {x+1,x+r-l+1};
            x = v[i].second;
        }
        while(q--)
        {
            ll k;
            cin>>k;
            if(k<=n)
            {
                cout<<s[k-1]<<endl;
            }
            else
            {
                for(int i=c-1;i>=0;i--)
                {
                    if(k>=v[i].first && k<=v[i].second)
                    {
                        k = a[i].first + k - v[i].first;
                    }
                }
                cout<<s[k-1]<<endl;
            }
        }
    }
    return 0;
}
