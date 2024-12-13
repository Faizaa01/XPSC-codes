#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    int pos = 0;
    for (char c : s1)
    {
        if (c == '+') pos++;
        else if (c == '-') pos--;
    }

    int cur = 0;
    int q = 0;

    for (char c : s2)
    {
        if (c == '+') cur++;
        else if (c == '-') cur--;
        else q++;
    }

    int total = 1 << q;
    int cnt = 0;

    for (int mask=0;mask<total;mask++)
    {
        int x = cur;
        for (int i = 0; i < q; i++)
        {
            if ((1 << i) & mask) x++;
            else x--;
        }
        if (x == pos) cnt++;
    }

    double ans = (double)cnt / total;
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}
