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
        int n;
        cin >> n;
        vector<ll> v(n);
        ll odd=0,even=0,mxo=0,mxe=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            {
                even++;
                mxe=max(mxe,v[i]);
            }
            else
            {
                odd++;
                mxo=max(mxo,v[i]);
            }
        }

        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0 && v[i]<mxo)
            {
                mxo+=v[i];
            }
        }

        if(odd==0 || even==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(mxe>mxo) cout<<even+1<<endl;
            else cout<<even<<endl;
        }
    }
    return 0;
}
