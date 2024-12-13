#include <bits/stdc++.h>
using namespace std;

int solve(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        cnt += (x & 1);
        x = x >> 1;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for (int i=0;i<m+1;i++)
    {
        cin >> v[i];
    }

    int fedor = v[m];
    int ans = 0;

    for (int i=0;i<m;i++)
    {
        int x = solve(v[i] ^ fedor);
        if (x <= k)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
