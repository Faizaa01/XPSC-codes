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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());

        map<int, int> mp;
        for (int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }

        int l = -1, r = 0, mxL = -1, mxR = -1;
        for (int i=0;i<n;i++)
        {
            if(mp[a[i]] < k)
                continue;
            if(l==-1)
            {
                l=a[i];
            }
            if(i==n-1 || mp[a[i+1]] < k || (a[i+1]-a[i])>1)
            {
                r=a[i];
                if(r-l >= mxR-mxL)
                {
                    mxL=l,mxR=r;
                }
                l=-1,r=-1;
            }
        }
        if(mxL==-1) cout << -1 << endl;
        else cout << mxL << " " << mxR << endl;
    }
    return 0;
}
