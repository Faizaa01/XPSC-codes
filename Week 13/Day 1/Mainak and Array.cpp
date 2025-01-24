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
        int n,a,b;
        cin >>n>>a>>b;
        vector<int>v;
        v.push_back(a);
        int sz=n;
        for(int i=1;i<n/2;i++)
        {
            while(sz==a || sz==b)
            {
                sz--;
            }
            v.push_back(sz);
            sz--;
        }
        sz=1;
        for(int i=n/2;i<n;i++)
        {
            while(sz==a || sz==b)
            {
                sz++;
            }
            v.push_back(sz);
            sz++;
        }
        v[n-1]=b;
        bool yo=true;
        for(int i=0;i<n/2;i++)
        {
            if(v[i]<a)
            {
                yo=false;
                break;
            }
        }
        for(int i=n/2;i<n;i++)
        {
            if(v[i]>b)
            {
                yo=false;
                break;
            }
        }
        if(yo)
        {
            for(auto val:v)
            {
                cout<<val<<" ";
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}
