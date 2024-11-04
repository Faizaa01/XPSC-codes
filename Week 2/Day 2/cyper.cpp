#include <bits/stdc++.h>
using namespace std;
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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>> v[i];
        }
        for (int i=0;i<n;i++)
        {
            int x;
            string s;
            cin >> x >> s;
            int cnt=0;
            for (int j=0;j<x;j++)
            {
                if (s[j]=='D')
                {
                    cnt++;
                }
                else
                {
                    cnt--;
                }
            }
            v[i]=(v[i]+cnt)%10;
            if (v[i]<0)
            {
                v[i] += 10;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << v[i] <<" ";
        }
        cout<<'\n';
    }
    return 0;
}
