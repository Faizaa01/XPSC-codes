#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int c0=0,c1=0;
        int i=0;
        while(i<n)
        {
            if(s[i]=='1')
            {
                c1++;
                while(s[i]=='1')
                {
                    i++;
                }
            }
            else
            {
                c0++;
                while(s[i]=='0')
                {
                    i++;
                }
            }
        }

        cout<<min(c0,c1)<<endl;
    }
    return 0;
}
