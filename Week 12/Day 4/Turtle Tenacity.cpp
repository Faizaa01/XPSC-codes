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
        int n;
       cin>>n;
       vector<ll>v(n);
       map<ll,ll>m;
       ll mn=INT_MAX;
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
           m[v[i]]++;
           mn=min(mn,v[i]);
       }
       bool yo=false;
       if(m[mn]==1)
       {
           yo=true;
       }
       else
       {
           for(int i=0;i<n;i++)
           {
               if(v[i]%mn != 0)
               {
                   yo=true;
                   break;
               }
           }
       }
       if(yo) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}

