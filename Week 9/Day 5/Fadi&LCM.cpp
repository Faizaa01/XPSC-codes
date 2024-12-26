#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll LCM(ll a,ll b)
{
   return (a / __gcd(a, b)) * b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    ll a=1,b=1;
    for(ll i=1;i*i<=n;i++)
    {
        if(i!=n/i)
        {
            if(LCM(i,n/i)==n)
            {
                a=i;
                b=n/i;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
