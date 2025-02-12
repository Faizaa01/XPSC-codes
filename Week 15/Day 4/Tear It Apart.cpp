#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int ans=n;
        for(int i=0;i<26;i++)
        {
            int x=0,y=0;
            char c = 'a'+i;
            for(int j=0;j<n;j++)
            {
                if(s[j]==c)
                {
                    x = max(x,y);
                    y=0;
                }
                else y++;
            }
            x=max(x,y);
            ans=min(ans,x);
        }
        int result=0;
        while(ans>0)
        {
            ans=ans/2;
            result++;
        }
        cout<<result<<endl;
    }
    return 0;
}
