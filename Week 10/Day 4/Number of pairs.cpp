#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,l,r;
        cin >> n >>l>>r;
        vector<int> a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for (int i=0;i<n;i++)
        {
            auto it1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
            auto it2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
            ans+= it2-it1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
