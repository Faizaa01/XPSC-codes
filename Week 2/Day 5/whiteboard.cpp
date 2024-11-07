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

        multiset<int> s;
        for (int i=1;i<=n;i++)
        {
            s.insert(i);
        }

        vector<pair<int, int>> v;
        while (s.size() != 1)
        {
            auto it = s.rbegin();
            int a = *it;
            ++it;
            int b = *it;
            v.push_back({a,b});

            s.erase(a);
            s.erase(b);
            int x = (a + b + 1) / 2;
            s.insert(x);
        }

        auto it = s.begin();
        cout << *it << endl;

        for (auto [x, y] : v)
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}
