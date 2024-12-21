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
        vector<string> a(n);
        map<string, ll> m;
        map<char, ll> m1;
        map<char, ll> m2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m1[a[i][0]]++;
            m2[a[i][1]]++;
            m[a[i]]++;

        }

        ll cnt = 0;
        for(int i=0;i<n;i++)
        {
            cnt += max(1ll*0,m1[a[i][0]]-m[a[i]]);
            cnt += max(1ll*0,m2[a[i][1]]-m[a[i]]);

            if(m1[a[i][0]]>0)
                m1[a[i][0]]--;
            if(m2[a[i][1]]>0)
                m2[a[i][1]]--;
            if(m[a[i]]>0)
                m[a[i]]--;
        }
        cout << cnt <<endl;
    }

    return 0;
}
