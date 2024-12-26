#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    ll z = 0;
    for (int i=1; i<n; i++)
    {
        z = __gcd(z,a[i] - a[i-1]);
    }

    ll total = 0;
    for (int i=0; i<n; i++)
    {
        total += (a[n-1] - a[i]);
    }
    ll y = total / z;

    cout<< y << " " << z <<endl;
    return 0;
}
