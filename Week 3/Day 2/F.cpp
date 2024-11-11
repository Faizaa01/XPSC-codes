#include <bits/stdc++.h>
using namespace std;

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
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        int i=0,ans=0;
        while(m.size()!=n)
        {
            ans++;
            m[v[i]]--;
            if(m[v[i]]==0)
            {
                m.erase(v[i]);
            }
            i++;
            n--;
        }
        cout<< ans <<endl;
    }
    return 0;
}
