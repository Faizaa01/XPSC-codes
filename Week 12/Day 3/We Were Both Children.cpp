#include <bits/stdc++.h>
using namespace std;

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
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }

        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            int cnt = 0;
            for(int j = 1; j * j <= i; j++)
            {
                if (i%j == 0)
                {
                    cnt += m[j];
                    if (j != i/j)
                    {
                        cnt += m[i/j];
                    }
                }
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }

    return 0;
}
