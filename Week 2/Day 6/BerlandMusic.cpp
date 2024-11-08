#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <int> p(n);
        for (int i=0;i<n;i++)
        {
            cin>>p[i];
        }

        string s;
        cin>>s;
        set<pair<int,int>> s1, s2;
        for (int i=0;i<n;i++)
        {
            if (s[i]=='1')
            {
                s1.insert({p[i],i});
            }
            else
            {
                s2.insert({p[i],i});
            }
        }

        vector <int> q(n);
        int i = 1;
        for (auto x : s2){
            q[x.second] = i;
            i++;
        }
        for (auto x : s1){
            q[x.second] = i;
            i++;
        }

        for (int i=0;i<n;i++)
        {
            cout <<q[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
