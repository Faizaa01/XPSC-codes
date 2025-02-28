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
        int n,k;
        cin >>n>>k;
        vector<int>c(n);
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }

        vector<int> a(n,0);
        a[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            int x=0;
            if(c[i]==c[n-1]) x=1;
            a[i]=a[i+1]+x;
        }
        if(c[0]==c[n-1])
        {
            if(a[0]%k==0 || a[0]>=k)
            {
                yes;
                continue;
            }
        }
        bool yo=false;
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            cnt += (c[i]==c[0]);
            if(cnt%k==0 && a[i+1]>=k)
            {
                yo=true;
                break;
            }
        }
        if(yo) yes;
        else no;
    }
    return 0;
}
