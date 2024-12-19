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
        ll n,k;
        cin >> n>>k;
        vector<ll> a(n),b(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        b=a;
        sort(b.begin(),b.end());
        int mex=n;
        for (ll i=0; i<n; i++)
        {
            if (b[i]!=i)
            {
                mex = i;
                break;
            }
        }
        ll x=0;
        for (ll i=0; i<n; i++)
        {
            x=a[i];
            a[i]=mex;
            mex=x;
        }
        a.push_back(mex);

        ll j = (k-1)%(n+1);
        for (ll i=(n+1)-j; i<=n; i++)
        {
            cout << a[i] << " ";
        }
        for (ll i=0; i<(n-j); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}