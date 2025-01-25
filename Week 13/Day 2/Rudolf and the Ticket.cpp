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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>b(n),c(m);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>c[i];
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(b[i]+c[j]<=k)
                {
                    total++;
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
