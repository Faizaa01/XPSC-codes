#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        vector<int> v(s.begin(), s.end());
        int cnt=1;
         for(int i=0;i<v.size();i++)
        {
            int x = v[i]+n;
            int y = lower_bound(v.begin(),v.end(),x)-v.begin()-i;
            cnt = max(cnt,y);
        }
        cout<< cnt <<endl;
    }
    return 0;
}
