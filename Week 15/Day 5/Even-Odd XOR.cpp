#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==3)
        {
            cout<<"2 1 3"<<endl;
            continue;
        }
        if(n%4==0)
        {
            ll a=(1ll<<30);
            ll x=1;
            for(int i=1;i<=n/2;i++)
            {
                cout<<x<<" "<<x+a<<" ";
                x++;
            }
        }
        else if(n%2==1)
        {
            ll a = (1ll<<25);
            ll b = (1ll<<26);
            ll x=1;
            cout<<b<<" ";
            for(int i=1;i<n/2;i++)
            {
                cout<<x<<" "<<x+a<<" ";
                x++;
            }
            if((n/2)%2==0)
            {
                b+=a;
            }
            cout<<n/2<<" "<<(n/2)+b<<" ";
        }
        else
        {
            ll a = (1ll<<25);
            ll b = (1ll<<26);
            ll x=1;
            cout<<0<<" "<<b<<" ";
            for(int i=1;i<=(n/2)-2;i++)
            {
                cout<<x<<" "<<x+a<<" ";
                x++;
            }
            cout<<x<<" "<<x+a+b<<" ";
        }
        cout<<endl;
    }
    return 0;
}
