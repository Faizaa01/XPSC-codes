#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(a[i] <= a[j])
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
