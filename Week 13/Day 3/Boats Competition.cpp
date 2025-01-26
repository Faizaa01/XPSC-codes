#include <bits/stdc++.h>
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
        cin>>n;
        vector<int>w(n);
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
        }
        sort(w.begin(),w.end());
        
        int a[55]={0};
        for(int k=0;k<55;k++)
        {
            int i=0,j=n-1,cnt=0;
            while(i<j)
            {
                int x = w[i]+w[j];
                if(x==k)
                {
                    i++,j--;
                    cnt++;
                }
                else if(x<k)
                {
                    i++;
                }
                else
                {
                    j--;
                }
            }
            a[k]=cnt;
        }
        int ans=0;
        for(int i=0;i<55;i++)
        {
            ans=max(ans,a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
