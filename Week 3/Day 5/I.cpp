#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        int a[n][n-1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
        }
        int freq[n+1]={0};
        for(int i=0;i<n;i++)
        {
            freq[a[i][0]]++;
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(freq[i]==n-1)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<" ";
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(a[i][0]!=ans)
            {
                x=i;
                break;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            cout<<a[x][i]<<" ";
        }
    }
    return 0;
}