#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll mn=1e18;
void solve(int i,ll sum1,ll sum2,vector<ll>&a)
{
    if(i==n)
    {
        mn=min(mn,abs(sum1-sum2));
        return;
    }
    solve(i+1,sum1+a[i],sum2,a);
    solve(i+1,sum1,sum2+a[i],a);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(0,0,0,a);
    cout<<mn<<endl;
    return 0;
}
