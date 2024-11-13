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
        string s;
        cin>>s;
        vector<ll> v;
        ll total=0;
        int mn=0;
        for(int i=0;i<n;i++)
        {
            ll l=i;
            ll r=n-i-1;
            if(s[i]=='L')
            {
                if(r>l)
                {
                    mn++;
                    total+=r;
                    v.push_back(r-l);
                }
                else
                {
                    total+=l;
                }
            }
            else
            {
                if(l>r)
                {
                    mn++;
                    total+=l;
                    v.push_back(l-r);
                }
                else
                {
                    total+=r;
                }
            }
        }
        vector<ll> ans(n+1);
        for(int i=mn;i<=n;i++)
        {
            ans[i]=total;
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(int i=mn-1;i>=0;i--)
        {
            total-=v.back();
            v.pop_back();
            ans[i]=total;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
