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
        int x,n,m;
        cin>>x>>n>>m;
        int h=x;
        for(int i=1;i<=n;i++)
        {
            if(((h/2)+10) >= h) break;
            h=(h/2)+10;
        }
        if(h <= m*10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
