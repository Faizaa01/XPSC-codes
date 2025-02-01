#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >>n>>k>>q;

    int start=200002,end=0;
    ll d[200002]={0};
    ll v[200002]={0};
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
        start = min(start,l);
        end = max(end,r);
    }

    for(int i=start;i<=end;i++)
    {
        d[i]=d[i]+d[i-1];
    }
    for(int i=1;i<200002;i++)
    {
        if(d[i]>=k)
        {
            v[i]=v[i-1]+1;
        }
        else
        {
            v[i]=v[i-1];
        }
    }
    for (int i = 1; i <= q; i++)
    {
        ll a, b;
        cin >>a >>b;

        cout << v[b]-v[a-1] << endl;
    }

    return 0;
}
