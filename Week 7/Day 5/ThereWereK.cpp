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
        int ans=0;
        for (int i=31;i>=0;i--)
        {
            if((1 << i) & n)
            {
                ans = (1 << i)-1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
