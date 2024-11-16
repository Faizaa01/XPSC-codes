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
        int n,k,q;
        cin>>n>>k>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=q)
            {
                cnt++;
                if(i==n-1 || a[i+1]>q)
                {
                    if(cnt>=k)
                    {
                        ll x=cnt-k+1;
                        ll sum=(x*(x+1))/2;
                        ans+=sum;
                    }
                    cnt=0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
