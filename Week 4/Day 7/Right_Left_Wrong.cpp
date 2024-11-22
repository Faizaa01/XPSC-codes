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
        vector<ll> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;

        ll ans = 0,sum = 0;
        int l=0,r=n-1;

        for (int i=0; i<n; i++)
        {
            sum += a[i];
        }

        while (l <= r)
        {
            if (s[l] == 'R')
            {
                sum -= a[l];
                l++;
            }
            else if (s[r] == 'L')
            {
                sum -= a[r];
                r--;
            }
            else
            {
                ans += sum;
                sum -= (a[l] + a[r]);
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
