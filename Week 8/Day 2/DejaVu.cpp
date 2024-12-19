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
        int n,q;
        cin >> n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>x(q);
        for(int i=0;i<q;i++)
        {
            cin>>x[i];
        }
        map<int,int>m;
        for(int i=0;i<q;i++)
        {
            if(m[x[i]]>0) continue;
            m[x[i]]++;
            for(int j=0;j<n;j++)
            {
                if(a[j] % (1 << x[i]) == 0)
                {
                    a[j]+= (1<<(x[i]-1));
                }
            }
        }
        for(int v:a)
        {
            cout<<v<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

