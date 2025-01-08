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
        bool yo=true;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int mx=1e9;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]<=mx)
            {
                mx=min(mx,v[i]);
            }
            else
            {
                int x=v[i];
                vector<int>a;
                while(x>0)
                {
                    a.push_back(x%10);
                    x=x/10;
                }
                for(int j=0;j<a.size();j++)
                {
                    if(a[j]>mx)
                    {
                        yo=false;
                        break;
                    }
                    else
                    {
                        mx=min(mx,a[j]);
                    }
                }
            }
            if(!yo) break;
        }
        if(yo) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
