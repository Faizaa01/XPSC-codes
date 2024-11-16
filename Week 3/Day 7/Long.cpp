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
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        int ans=0;
        bool flag=false;
        for(int i=0;i<=n;i++)
        {
            if(i<n) sum+=abs(a[i]);
            if(flag) 
            {
                if(i==n || a[i]>0)
                {
                    ans++;
                    flag=false;
                }
            }
            else
            {
                if(a[i]<0)
                {
                    flag=true;
                }
            }
        }
        cout<<sum<<" "<<ans<<endl;
    }
    return 0;
}
