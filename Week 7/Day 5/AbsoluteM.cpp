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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i <= 10; i++)
        {
            bool x = false, y = false;
            for (int j = 0; j < n; j++)
            {
                if ((v[j] >> i) & 1)
                    x = true;
                else
                    y = true;

                if (x && y)  break;
            }
            if (x && y)
            {
                ans += (1ll << i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
