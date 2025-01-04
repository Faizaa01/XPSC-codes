#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    for (int i = 0; i <q; i++)
    {
        int m;
        cin>>m;
        auto it1 = upper_bound(a.begin(),a.end(),m);
        auto it2 = a.begin();

        cout << it1-it2 <<endl;
    }

    return 0;
}
