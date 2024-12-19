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
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        vector<int> v1, v2;
        int idx=n;
        int x = v[0];
        v1.push_back(x);
        for(int i=1;i<n;i++)
        {
            if(x <= v[i])
            {
                x = v[i];
                v1.push_back(x);

            }
            else
            {
                idx = i;
                break;
            }
        }
        for(int i=idx;i<n;i++)
        {
            v2.push_back(v[i]);
        }
        for(int i=0;i<v1.size();i++)
        {
            v2.push_back(v1[i]);
        }

        bool flag = true;
        for(int i=1;i<n;i++)
        {
            if(v2[i-1]>v2[i])
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}