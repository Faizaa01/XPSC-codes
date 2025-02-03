#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        pbds<ll> p;
        map<int,int>m;
        for(int i=n-1;i>=0;i--)
        {
            p.insert(a[i]);
            ans += p.order_of_key(a[i]) + m[a[i]];
            m[a[i]]++;
        }
        cout<<ans<<endl;
    }
   return 0;
}
