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
        int n;
        cin >> n;
        vector<ll> v(n);
        int idx = -1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(idx == -1 && v[i]>0)
            {
                idx=i;
            }
        }
        ll ans=0;
        if(idx == -1 || idx == n-1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=idx;i<n-1;i++)
            {
                if(v[i]==0) ans++;
                ans+=v[i];
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
