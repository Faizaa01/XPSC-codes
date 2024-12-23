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
        string s;
        cin>>n>>s;

        if(s[0]=='s')
        {
            s[0]='.';
        }
        if(s[n-1]=='p')
        {
            s[n-1]='.';
        }
        set<char>st;
        for(auto c:s)
        {
            if(c != '.')
            {
                st.insert(c);
            }
        }
        if(st.size()<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
