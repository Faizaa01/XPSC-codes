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
        int n,k;
        cin>>n>>k;

        vector<ll>a(k);
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());

        ll x=0,ans=0;
        for(int i=0;i<k;i++)
        {
            if(x<a[i])
            {
                x+=(n-a[i]);
                ans++;
            }
            else break;
        }
        cout << ans << endl;
    }
    return 0;
}
