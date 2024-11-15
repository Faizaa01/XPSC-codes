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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0,cnt=0;
        while(l<n)
        {
            if(s[l]=='B')
            {
                l=min(n,l+k);
                cnt++;
            }
            else
            {
                l++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
