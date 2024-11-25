#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int zero=0,one=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            int x=0;
            cin>>x;
            if(x==0)
            {
                zero++;
            }
            else if(x==1)
            {
                one=1;
            }
            else
            {
                cnt=1;
            }
        }
        int m=n-zero;
        if(zero>m+1)
        {
            if(one==0)
            {
                cout<<1<<endl;
            }
            else
            {
                if(cnt==1)
                {
                    cout<<1<<endl;
                }
                else
                {
                    cout<<2<<endl;
                }
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
