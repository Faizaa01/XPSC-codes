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

        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin >> a[i];
            
        int ans = 1e9;
        for (int i=0; i<n; i++)
        {
            int m = 0;
            if (i+1 < n)
            {
                m = max(m, abs(a[i+1] - a[i]));
            }
            if (i-1 >= 0)
            {
                m = max(m, abs(a[i-1] - a[i]));
            }
            
            ans = min(ans, m);
        }
        cout << ans << endl;
    }
    return 0;
}
