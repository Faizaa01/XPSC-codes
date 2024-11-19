#include<bits/stdc++.h>
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
        int n,c;
        cin>>n>>c;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        ll cnt=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+v[i]>c) break;
            cnt++;
            sum+=v[i];
        }
        cout<< cnt <<endl;
    }
    return 0;
}
