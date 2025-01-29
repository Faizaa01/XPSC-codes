#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

bool solve(int n,vector<ll>a,ll c,ll d,ll k)
{
    if(k==0)
    {
        return (a[0]*d >= c);
    }
    ll s=0;
    if(k>=n)
    {
        for(int i=0;i<n;i++)
        {
            s+=a[i];
        }
    }
    else
    {
        for(int i=0;i<k;i++)
        {
            s+=a[i];
        }
    }
    ll x =(d/k)*s;
    ll remaining = d%k;
    if(remaining >= n)
    {
        for(int i=0;i<n;i++)
        {
            x+=a[i];
        }
    }
    else
    {
        for(int i=0;i<remaining;i++)
        {
            x+=a[i];
        }
    }
    return x>=c;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n,c,d;
        cin>>n>>c>>d;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        ll sum=0;
        for(int i=0;i<min(n,d);i++)
        {
            sum+=v[i];
        }
        if(sum>=c)
        {
            cout<<"Infinity"<<endl;
            continue;
        }
        ll ans=-1,l=0,r=1e10;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            if(solve(n,v,c,d,mid+1))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(ans==-1) cout<<"Impossible"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
