#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> a(n),b(n),v(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    for(int i=0;i<n;i++)
    {
        v[i] = a[i] - b[i];
    }

    pbds<ll>p;
    ll cnt = 0;
    for (int i=0;i<n;i++)
    {
        cnt += p.size() - p.order_of_key(-v[i]+1);
        p.insert(v[i]);
    }
    cout << cnt << endl;

    return 0;
}
