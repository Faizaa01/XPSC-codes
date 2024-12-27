#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        if(l<=3 && r<=3)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(r-l>=1)
        {
            if(r%2) r--;
            cout<<r/2<<" "<<r/2<<endl;
            continue;
        }
        int x=l;
        for(int i=2;i*i<=l;i++)
        {
            if(l%i==0)
            {
                x=i;
            }
        }
        if(x==l)
        {
            cout<<-1<<endl;
        }
        else cout<<x<<" "<<l-x<<endl;
    }
    return 0;
}
