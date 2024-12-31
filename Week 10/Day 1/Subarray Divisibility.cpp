#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<ll,ll>m;
    ll sum=0,cnt=0;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        sum+=v%n;
        sum=(sum+n)%n;
        cnt+=m[sum];
        m[sum]++;
    }
    cout<<cnt<<endl;

    return 0;
}
