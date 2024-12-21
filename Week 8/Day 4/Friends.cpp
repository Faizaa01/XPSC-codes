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

        vector<int>a(n),b(n),v(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(int i=0;i<n;i++)
        {
            v[i] = b[i]-a[i];
        }
        sort(v.rbegin(),v.rend());

        int ans=0;
        int l=0,r=n-1;

        while(l<r)
        {
            if(v[l]>=0 && v[r]>=0)
            {
                ans++;
                l++,r--;
            }
            else if(v[l]<0 && v[r]<0)
            {
                break;
            }
            else if(v[l]>-1)
            {
                if(v[l]>=abs(v[r]))
                {
                    ans++;
                    l++,r--;
                }
                else r--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
