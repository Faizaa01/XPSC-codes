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
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            ll x=pow(2,i);
            ll y=(n + x/2)/x;
            if(k<=y)
            {
                if(k==1)
                {
                    ans = x/2;
                    break;
                }
                else
                {
                    ans=(x/2)+(k-1)*x;
                    break;
                }
            }
            else
            {
                k -= y;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
