#include <bits/stdc++.h>
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
        ll n,m;
        cin >> n >> m;
        if(n > m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<ll> v(n);
        ll sum=0;
        if(n%2==0)
        {
            if(m%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<n-2;i++)
                {
                    v[i]=1;
                    sum++;
                }
                v[n-2] = (m-sum)/2;
                v[n-1] = v[n-2];
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++)
            {
                v[i]=1;
                sum++;
            }
            v[n-1]=m-sum;
        }
        
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
