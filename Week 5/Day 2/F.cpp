#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        for(int i=0;i<n;i++)
        {
            s+="BAN";
        }
        int sz=s.size();
        vector<pair<int,int>> v;
        int l=2,r=sz;
        while(l<r)
        {
            v.push_back({l,r});
            swap(s[l],s[r]);
            l+=3;
            r-=3;
        }
        cout<<v.size()<<endl;
        for(auto [x,y] : v)
        {
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
