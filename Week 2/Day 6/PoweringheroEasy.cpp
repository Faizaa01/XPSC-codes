#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<ll> pq;
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                if(pq.size()>0)
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
