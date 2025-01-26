#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum*=2;
        ll ans=0;
        if(sum%n==0)
        {
            sum/=n;
            map<ll,ll>m;
            for(int i=0;i<n;i++)
            {
                ans+=m[sum-a[i]];
                m[a[i]]++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
