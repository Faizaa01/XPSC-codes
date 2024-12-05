#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int mx=INT_MIN,ans=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];
            mx=max(mx,a[i]);
            if(sum - mx == mx)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
