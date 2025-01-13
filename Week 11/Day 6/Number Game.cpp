#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ok(vector<int>&a, int n,int k)
{
    multiset<int>s;
    for(auto x:a)
    {
        s.insert(x);
    }
    for(int i=1;i<=k;i++)
    {
        if(s.empty()) return false;
        int x = k-i+1;
        auto it = s.upper_bound(x);
        if(it==s.begin()) return false;
        it--;
        s.erase(it);

        if(!s.empty())
        {
            it = s.begin();
            ll y = *it;
            y += x;
            s.erase(it);
            s.insert(y);
        }
    }
    return true;
}
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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=0,r=n,ans=0;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(ok(a,n,mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
