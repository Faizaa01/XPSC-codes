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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cnt=0,mx=0;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                ll x = a[i-1] - a[i];
                cnt += x;
                a[i] = a[i-1];
                mx=max(mx,x);
            }
        }
        if(cnt!=0) cnt+=mx;

        cout<<cnt<<endl;
    }
    return 0;
}
