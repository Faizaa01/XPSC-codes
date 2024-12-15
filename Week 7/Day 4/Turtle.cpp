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
        int n,m;
        cin >> n >> m;
        int l= max(0,n-m), r = n+m;
        int ans = 0;
        for(int i=31;i>=0;i--)
        {
            int x=((1<<i) & l) ? 1:0;
            int y=((1<<i) & r) ? 1:0;
            
            if(x^y)
            {
                ans = (1<<i);
                ans|= ans-1;
                break;
            }
        }
        cout << (l|ans) << endl;
    }
    return 0;
}
