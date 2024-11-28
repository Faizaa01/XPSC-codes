#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >>n>>k;
        vector<ll> v(k);
        for(int i=0;i<k;i++)
        {
            cin>>v[i];
        }
        if(k==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int j=n-1;
            vector<ll>a(n);
            for(int i=k-1;i>0;i--)
            {
                a[j]=v[i]-v[i-1];
                j--;
            }
            while(j>=0)
            {
                a[j]=a[j+1];
                v[0]-=a[j];
                j--;
            }
            a[0]+=v[0];
            bool yo=true;
            for(int i=1;i<n;i++)
            {
                if(a[i-1]>a[i])
                {
                    yo=false;
                    break;
                }
            }
            if(yo) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
