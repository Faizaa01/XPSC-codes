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
        int n,k;
        cin>>n>>k;
        string s;
        cin >> s;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                st.insert(i);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                auto it = st.lower_bound(i-k);
                if(it==st.end() || *it>i+k)
                {
                    ans++;
                    s[i]='1';
                    st.insert(i);
                }
            }
        }
        cout<<ans<<endl<<endl;
    }
    return 0;
}
