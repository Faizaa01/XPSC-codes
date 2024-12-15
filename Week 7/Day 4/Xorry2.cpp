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
        ll x;
        cin >> x;

        int bit = 31, n = 0;
        while(bit >= 0)
        {
            if ((1 << bit) & x)
            {
                n++;
            }
            if(n==2) break;
            bit--;
        }
        int cnt = 0;
        while(bit>=0)
        {
            if (((1 << bit) & x) == 0) cnt++;
            bit--;
        }
        cout << (1<<cnt) << endl;
    }

    return 0;
}
