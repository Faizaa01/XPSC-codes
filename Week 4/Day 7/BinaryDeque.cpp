#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<s)
        {
            cout<<-1<<endl;
        }
        else if(sum==s)
        {
            cout<<0<<endl;
        }
        else
        {
            int sum1=0,l=0,r=0,ans=0;
            while(r<n)
            {
                sum1 += a[r];
                while (sum1>s)
                {
                    sum1-=a[l];
                    l++;
                }
                if (sum1==s)
                {
                    ans = max(ans,r-l+1);
                }
                r++;
            }

            ans = n-ans;
            cout<<ans<<endl;
        }
    }
    return 0;
}
