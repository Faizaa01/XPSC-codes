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
        string s;
        cin>>s;
        map<char,ll>m;
        for(auto x:s)
        {
            m[x]++;
        }
        ll mn1=min(m['U'],m['D']);
        ll mn2=min(m['L'],m['R']);
        if(mn1==0 && mn2==0)
        {
            cout<<0<<endl<<" "<<endl;
        }
        else if(mn1==0)
        {
            cout<<2<<endl<<"LR"<<endl;
        }
        else if(mn2==0)
        {
            cout<<2<<endl<<"UD"<<endl;
        }
        else
        {
            string t="";
            for(ll i=0;i<mn1;i++)
            {
                t+='U';
            }
            for(ll i=0;i<mn2;i++)
            {
                t+='R';
            }
            for (ll i=0;i<mn1;i++)
            {
                t += 'D';
            }
            for (ll i=0;i<mn2;i++)
            {
                t += 'L';
            }
            cout<<t.size()<<endl<<t<<endl;
        }
    }
    return 0;
}
