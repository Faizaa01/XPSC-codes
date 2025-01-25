#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    vector<int>v;
    int i=0,j=0;
    while(i<n ||j<m)
    {
        if(i<n &&j<m)
        {
            if(a[i]==0)
            {
                v.push_back(0);
                i++,k++;
            }
            else if(b[j]==0)
            {
                v.push_back(0);
                j++,k++;
            }
            else
            {
                if(a[i]<b[j] && a[i]<=k)
                {
                    v.push_back(a[i]);
                    i++;
                }
                else if(a[i]>=b[j] && b[j]<=k)
                {
                    v.push_back(b[j]);
                    j++;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else if(i<n)
        {
            if(a[i]==0)
            {
                v.push_back(0);
                i++,k++;
            }
            else
            {
                if(a[i]<=k)
                {
                    v.push_back(a[i]);
                    i++;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else if(j<m)
        {
            if(b[j]==0)
            {
                v.push_back(0);
                j++,k++;
            }
            else
            {
                if(b[j]<=k)
                {
                    v.push_back(b[j]);
                    j++;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
