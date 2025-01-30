#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

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
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string s,t;
            cin>>s;
            if(i%k==0)
            {
                for(int j=0;j<s.size();j+=k)
                {
                    t.push_back(s[j]);
                }
                v.push_back(t);
                t.clear();
            }
        }
        for(auto x:v)
        {
            cout<<x<<endl;
        }
    }
    return 0;
}
