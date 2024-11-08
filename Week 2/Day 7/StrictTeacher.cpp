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
        int n,m,q;
        cin >> n >> m >> q;
        vector<int> v(m);
        for(int i=0;i<m;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while(q--)
        {
            int x;
            cin>>x;
            if(x < v[0])
            {
                cout<< v[0]-1 << endl;
                continue;
            }
            else if(x > v[m-1])
            {
                cout<< n-v[m-1] << endl;
                continue;
            }
            else
            {
                auto a = lower_bound(v.begin(),v.end(),x);
                auto b = a;
                b--;
                int l = *b;
                int r = *a;
                int mid = (l+r)/2;
                int ans= min((mid-l),(r-mid));
                cout<< ans << endl;;
            }
        }
    }
    return 0;
}
