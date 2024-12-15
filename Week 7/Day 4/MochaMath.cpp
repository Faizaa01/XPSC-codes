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
        cin >> n;
        vector<ll> v(n);
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(i==0)
            {
                ans = v[0];
            }
            else
            {
                ans = ans & v[i];
            }
        }
        cout <<ans<<endl;
    }
    return 0;
}
