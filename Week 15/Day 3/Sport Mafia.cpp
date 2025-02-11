#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin>>n>>k;
    
    ll l=0,r=n,x=0;
    while (l <= r)
    {
        ll mid = l+(r-l)/2;
        ll sum = ((n-mid)*(n-mid+1))/2 - mid;

        if (sum == k)
        {
            cout<<mid<<endl;
            break;
        }
        else if(sum > k)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return 0;
}
