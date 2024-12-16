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
        string s;
        cin >> n >> s;
        string ans;
        int x=0,y=0,l=0,r=n-1;
        while(l<r)
        {
            if(s[l]==s[r]) x+=2;
            else y++;
            l++,r--;
        }
        for(int i=0;i<=n;i++)
        {
            int cnt = i-y;
            if(cnt<0)
            {
                ans.push_back('0');
            }
            else
            {
                cnt=max((cnt%2), cnt-x);
                cnt=max(0, cnt-(n%2));

                if(cnt==0)
                {
                    ans.push_back('1');
                }
                else
                {
                    ans.push_back('0');
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
