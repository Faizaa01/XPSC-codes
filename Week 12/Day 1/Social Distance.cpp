#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n>m)
        {
            no;
            continue;
        }
        sort(a.rbegin(),a.rend());

        int last = m-a[0],x=0;
        bool yo=true;
        for (int i=0;i<n-1;i++)
        {
            if(i!=n-1)
            {
                x += a[i]+1;
                if(x>=last)
                {
                    yo = false;
                    break;
                }
            }
            else
            {
                if(x+a[i]>=m)
                {
                    yo = false;
                    break;
                }
            }
        }
        if(yo) yes;
        else no;
    }
    return 0;
}

