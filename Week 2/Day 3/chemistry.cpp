#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt[26]= {0};
        for(int i=0; i<n; i++)
        {
            cnt[s[i]-'a']++;
        }
        int odd=0;
        for(int i=0; i<26; i++)
        {
            if(cnt[i]%2!=0)
            {
                odd++;
            }
        }
        bool yo = false;
        int x = n-k;
        if (x % 2 == 0)
        {
            if (odd == 0 || odd <= k)
            {
                yo = true;
            }
        }
        else
        {
            if (odd <= k + 1)
            {
                yo = true;
            }
        }

        if(yo) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
    return 0;
}
