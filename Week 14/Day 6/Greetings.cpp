#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for (int i=0;i<n;i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a.begin(),a.end());
        pbds<int>p;
        for (int i=0;i<n;i++)
        {
            p.insert(a[i].second);
        }
        ll ans=0;
        for (int i=0;i<n;i++)
        {
            ans += p.order_of_key(a[i].second);
            p.erase(a[i].second);
        }
        cout<<ans<<endl;
    }
    return 0;
}
