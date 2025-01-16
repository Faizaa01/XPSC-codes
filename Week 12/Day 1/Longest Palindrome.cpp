#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    map<string, int> mp;

    for (int i=0;i<n;i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    string l="",r="";
    string mx = "";
    int sz = 0;

    for (auto& s : v)
    {
        string rev = s;
        reverse(rev.rbegin(),rev.rend());
        if (mp[s]>0 && mp[rev]>0)
        {
            if (s==rev && mp[s]>1)
            {
                l += s;
                r = s+r;
                mp[s] -= 2;
            }
            else if(s!=rev)
            {
                l += s;
                r = rev+r;
                mp[s]--;
                mp[rev]--;
            }
        }
        if (s==rev && s.size()>sz)
        {
            mx = s;
            sz = s.size();
        }
    }
    string result = l+mx+r;
    cout<< result.size() <<endl;
    cout<< result <<endl;

    return 0;
}
