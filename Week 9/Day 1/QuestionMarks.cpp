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
        int frq[4]={0};
        for(auto c:s)
        {
            if(c != '?')
            {
                frq[c-'A']++;
            }
        }
        ll ans=0;
        for(int i=0;i<4;i++)
        {
            ans += min(n,frq[i]);
        }
        cout<< ans <<endl;
    }

    return 0;
}
