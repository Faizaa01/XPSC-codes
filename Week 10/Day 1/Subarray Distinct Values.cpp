#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll ans=0,j=0;
    map<ll,ll>m;
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;
        while(m.size()>k)
        {
            m[v[j]]--;
            if(m[v[j]]==0)
            {
                m.erase(v[j]);
            }
            j++;
        }
        ans+=(i-j+1);
    }
    cout<<ans<<endl;

    return 0;
}
