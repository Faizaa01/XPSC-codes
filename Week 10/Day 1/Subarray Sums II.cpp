#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    map<ll,ll>m;
    ll sum=0,cnt=0;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        sum+=v;
        cnt+=m[sum-x];
        m[sum]++;
    }
    cout<<cnt<<endl;

    return 0;
}
