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
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int w;
            cin>>w;
            m[w]++;
        }
        int mx=0;
        for(int i=2;i<=(2*n);i++)
        {
            int total=0;
            for(auto v:m)
            {
                int x=i-v.first;
                if(x>=1 && m.count(x))
                {
                    total+=min(v.second,m[x]);
                }
            }
            total/=2;
            mx=max(mx,total);
        }
        cout<<mx<<endl;
    }
    return 0;
}
