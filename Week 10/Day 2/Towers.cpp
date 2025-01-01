#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin >>a[i];
    }

    multiset<int> m;
    for (int x:a)
    {
        auto it = m.upper_bound(x);
        if (it != m.end())
        {
            m.erase(it);
        }
        m.insert(x);
    }

    cout << m.size() << endl;
    return 0;
}
