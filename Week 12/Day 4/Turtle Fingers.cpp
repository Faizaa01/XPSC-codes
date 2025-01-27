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
        ll a,b,l;
        cin>>a>>b>>l;
        ll x=0,ans=0;
        if(a==b)
        {
            ll cnt=1;
            while(l%b==0)
            {
                l/=b;
                cnt++;
            }
            cout<< cnt <<endl;
        }
        else
        {
            set<int>s;
            while(true)
            {
                int p=pow(a,x);
                if(p>l) break;
                if(l%p != 0) break;

                ll y = l/p;
                s.insert(y);

                while(y % b==0)
                {
                    y /= b;
                    s.insert(y);
                }
                x++;
            }
            cout<<s.size()<<endl;
        }
    }
    return 0;
}

