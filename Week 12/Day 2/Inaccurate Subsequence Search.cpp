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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n),b(n);
        map<int,int> m1,m2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            m2[b[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            m1[a[i]]++;
        }

        int ans=0,cur=0;
        for(auto x:m1)
        {
            cur+= min(x.second, m2[x.first]);
        }
        if(k<=cur)
        {
            ans++;
        }
        for(int i=m;i<n;i++)
        {
            int x = min(m1[a[i-m]],m2[a[i-m]]);
            m1[a[i-m]]--;
            int y = min(m1[a[i-m]],m2[a[i-m]]);
            if(x<y) cur++;
            else if(x>y) cur--;

            x = min(m1[a[i]],m2[a[i]]);
            m1[a[i]]++;
            y = min(m1[a[i]],m2[a[i]]);
            if(x<y) cur++;
            else if(x>y) cur--;

            if(k<=cur) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
