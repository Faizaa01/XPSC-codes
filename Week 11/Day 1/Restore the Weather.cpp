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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> a(n);
        vector<int>b(n),v(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        for(int i=0; i<n; i++)
        {
            int x=a[i].second;
            v[x]=b[i];
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
