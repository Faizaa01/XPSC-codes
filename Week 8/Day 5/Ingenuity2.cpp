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
        ll n;
        string s;
        cin >> n >>s;
        int x=0,y=0;
        set<char>st;
        for(int i=0; i<n; i++)
        {
            st.insert(s[i]);
            if(s[i]=='E') x++;
            else if(s[i]=='W') x--;
            else if(s[i]=='N') y++;
            else y--;
        }

        map<char,int>m;
        map<char,int> mp;
        if(x==0 && y==0 && n==2)
        {
            cout<<"NO"<<endl;
        }
        else if(x%2==0 && y%2==0)
        {
            for(int i=0; i<n; i++)
            {
                m[s[i]]++;
            }

            if(n==4 && st.size()==4)
            {
                for(int i=0; i<n; i++)
                {
                    if(s[i]=='W' || s[i]=='E') cout<<'H';
                    else cout<<'R';
                }
                cout<<endl;
                continue;
            }
            for(int i=0; i<n; i++)
            {
                mp[s[i]]++;
                if(mp[s[i]] <= m[s[i]]/2)
                {
                    cout<<'H';
                }
                else cout<<'R';
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
