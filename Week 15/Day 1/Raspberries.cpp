#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=k,even = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                even++;
            }
            if(a[i]%k==0)
            {
                ans=0;
            }
            ans=min(ans,k-a[i]%k);
        }
        if(k==4)
        {
            if(even==1)
            {
                ans=min(1,ans);
            }
            else if(even>=2)
            {
                ans=0;
            }
            else
            {
                ans=min(2,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
