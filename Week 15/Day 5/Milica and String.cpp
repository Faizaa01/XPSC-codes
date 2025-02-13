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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
                b++;
        }
        if(b==k)
        {
            cout<<0<<endl;
        }
        else if(b<k)
        {
            int a=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='A') a++;
                if(a==k-b)
                {
                    cout<<1<<endl;
                    cout<<i+1<<" "<<"B"<<endl;
                    break;
                }
            }
        }
        else
        {
            int bb=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='B') bb++;
                if(bb==b-k)
                {
                    cout<<1<<endl;
                    cout<<i+1<<" "<<"A"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
