#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll x=a;
            ll y=a*b-a;
            ll z=a*b;
            if(x!=y)
            {
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
            else
            {
                cout<<x<<" "<<2*z-x<<" "<<2*z<<endl;
            }
        }
    }
    return 0;
}
