#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve(int l1,int r1,int l2,int r2,vector<int> &v,int &ans)
{
    int mx=0;
    int mn=INT_MAX;
    for(int i=l1;i<=r1;i++)
    {
        mx=max(mx,v[i]);
    }
    for(int i=l2;i<=r2;i++)
    {
        mn = min(mn,v[i]);
    }
    if(mx>mn)
    {
        int x=l2;
        for(int i=l1;i<=r1;i++)
        {
            swap(v[i],v[x]);
            x++;
        }
        ans++;
    }
    if(l1==r1) return;
    int m1=(l1+r1)/2;
    int m2=(l2+r2)/2;

    solve(l1,m1,m1+1,r1,v,ans);
    solve(l2,m2,m2+1,r2,v,ans);
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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
                cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        int mid = (n-1) / 2;
        solve(0,mid,mid+1,n-1,a,ans);
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}
