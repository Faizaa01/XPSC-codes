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
        int n;
        cin>>n;
        map<int,int>m;
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            ans += m[x-i];
            m[x-i]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
