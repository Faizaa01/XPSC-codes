#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,h;
        cin >>n>>m>>h;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        long long ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            ans+=min(1ll*a[i],1ll*b[i]*h);
        }
        cout<<ans<<endl;
    }
    return 0;
}