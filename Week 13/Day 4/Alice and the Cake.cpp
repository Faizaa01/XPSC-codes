#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

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
        ll sum=0;
        map<ll,ll>m;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            m[v[i]]++;
        }
        if(n==1)
        {
            yes;
            continue;
        }
        priority_queue<ll>pq;
        pq.push(sum);
        ll sz=n;
        while(pq.size()<sz)
        {
            ll x = pq.top();
            pq.pop();
            ll a=x/2,b=(x+1)/2;
            if(m.count(a))
            {
                m[a]--;
                sz--;
            }
            else
            {
                pq.push(a);
            }
            if(m[a]==0) m.erase(a);

            if(m.count(b))
            {
                m[b]--;
                sz--;
            }
            else
            {
                pq.push(b);
            }
            if(m[b]==0) m.erase(b);
        }
        if(pq.size()==0) yes;
        else no;
    }
    return 0;
}

