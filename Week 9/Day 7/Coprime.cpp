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
        vector<int>a(1001,-1);
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a[x]=i;
        }
        int ans = -1;
        for(int i=1;i<1001;i++)
        {
            if(a[i] != -1)
            {
                for(int j=1;j<1001;j++)
                {
                    if(a[j]!=-1 && __gcd(i,j)==1)
                    {
                        ans=max(ans,a[i]+a[j]);
                    }
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
