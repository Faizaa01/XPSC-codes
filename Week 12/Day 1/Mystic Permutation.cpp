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
        vector<int> p(n),a(n);
        for (int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }

        multiset<int>m;
        for (int i=1;i<=n;i++)
        {
            m.insert(i);
        }

        for (int i=0;i<n;i++)
        {
            auto it = m.begin();
            if(p[i] != *it)
            {
                a[i]=*it;
                m.erase(it);
            }
            else
            {
                if(m.size()==1)
                {
                    a[i]=*it;
                    m.erase(it);
                    swap(a[i],a[i-1]);
                }
                else
                {
                    it++;
                    a[i]=*it;
                    m.erase(it);
                }
            }
        }
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
